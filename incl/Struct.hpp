/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Struct.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 15:58:19 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/09/26 12:50:10 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_HPP
# define STRUCT_HPP

#include <string>
#include <vector>

class	Struct
{
	public:
		Struct() {} ;
		std::string	name;
		std::string	tdef;
		std::vector<std::pair<std::string, std::string>>	elements;
		Struct(std::string name, std::string tdef, std::vector<std::pair<std::string, std::string>> elements) : name(name), tdef(tdef), elements(elements) {} ;
		~Struct() {} ;
		std::string print(size_t indent)
		{
			std::string out;
			if (this->tdef.size())
				out += "typedef ";
			out += "struct";
			out += std::string(indent - (out.size() / 4), '\t');
			out += this->name + "\n{\n";
			for (size_t j = 0; j < this->elements.size() ; j++)
			{
				out += "\t" + this->elements[j].first;
				out += std::string(indent - 1 - (this->elements[j].first.size() / 4), '\t');
				out += this->elements[j].second + "\n";
			}
			out += "}";
			if (this->tdef.size())
			{
				out += std::string(indent, '\t') + this->tdef;
			}
			out += "\n";

			return (out);
		}
};

#endif
