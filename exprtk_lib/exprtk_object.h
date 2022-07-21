#pragma once

#include "externals/exprtk/exprtk.hpp"

class exprtk_object
{
public:
	exprtk_object();
	virtual ~exprtk_object() {};
private:
	exprtk::symbol_table<double> m_exprtk_symbolTable;
	exprtk::parser<double> m_exprtk_parser;
	exprtk::expression<double> m_exprtk_expression;
};
