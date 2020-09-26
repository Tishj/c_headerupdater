/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Function.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 15:49:30 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/09/26 12:43:09 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <Function.hpp>

using namespace std;

Function::Function() {};

Function::Function(string ret, string name, vector<string> args) : returnType(ret), name(name), args(args) {};

Function::Function(const Function& funct) : returnType(funct.returnType), name(funct.name), args(funct.args) {};

Function::~Function() {};
