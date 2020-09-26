/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Function.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 15:46:52 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/09/26 12:43:03 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_HPP
# define FUNCTION_HPP

#include <iostream>
#include <string>
#include <vector>

class	Function
{
	public:
		Function();
		Function(std::string ret, std::string name, std::vector<std::string> args);
		Function(const Function& funct);
		~Function();
		std::string	returnType;
		std::string	name;
		std::vector<std::string>	args;
		std::string	print(size_t indent)
		{
			std::string out;

			out += this->returnType;
			out += std::string(indent - (this->returnType.size() / 4), '\t');
			out += this->name + "(";
			for (size_t i = 0; i < this->args.size(); i++)
			{
				out += this->args[i];
				if (i + 1 < this->args.size())
					out += ", ";
			}
			out += ");";
			return (out);
		}
};

#endif
