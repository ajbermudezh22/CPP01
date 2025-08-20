/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 11:32:45 by albbermu          #+#    #+#             */
/*   Updated: 2025/08/20 11:32:45 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string replaceString(const std::string& line, const std::string& s1, const std::string& s2)
{
    if (s1.empty())
        return line;
    
    std::string result;
    size_t pos = 0;
    size_t found;
    
    while ((found = line.find(s1, pos)) != std::string::npos)
    {
        result += line.substr(pos, found - pos);
        result += s2;
        pos = found + s1.length();
    }
    result += line.substr(pos);
    
    return (result);
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string outputFilename = filename + ".replace";
    // Open input file
    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open())
    {
        std::cerr << "Error: Cannot open input file '" << filename << "'" << std::endl;
        return (1);
    }
    // Open output file
    std::ofstream outputFile(outputFilename.c_str());
    if (!outputFile.is_open())
    {
        std::cerr << "Error: Cannot create output file '" << outputFilename << "'" << std::endl;
        inputFile.close();
        return (1);
    }
    std::string line;
    while (std::getline(inputFile, line))
    {
        std::string replacedLine = replaceString(line, s1, s2);
        outputFile << replacedLine;
        if (!inputFile.eof())
            outputFile << std::endl;
    }
    inputFile.close();
    outputFile.close();
    
    std::cout << "File processed successfully. Output saved to '" << outputFilename << "'" << std::endl;
    return (0);
}
