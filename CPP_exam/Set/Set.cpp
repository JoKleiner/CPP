
searchable_tree_bag.cpp:
{
	#include "searchable_tree_bag.hpp"

	searchable_tree_bag::searchable_tree_bag(const searchable_tree_bag &other) : searchable_bag(other), tree_bag(other) {}

	bool searchable_tree_bag::has(){
		...
	}
}

searchable_tree_bag.hpp:
{
	#pragma once

	#include "tree_bag.hpp"
	#include "searchable_bag.hpp"

	class searchable_tree_bag : public searchable_bag, public tree_bag
	{
	  public:
		searchable_tree_bag() = default;
		searchable_tree_bag(const searchable_tree_bag &other);

		bool has();
	};
}

searchable_array_bag.cpp:
{
	#include "searchable_array_bag.hpp"

	searchable_array_bag::searchable_array_bag(const searchable_array_bag &other) : searchable_bag(other), array_bag(other) {}

	bool searchable_array_bag::has(){
		...
	}
}

searchable_array_bag.hpp:
{
	#pragma once

	#include "array_bag.hpp"
	#include "searchable_bag.hpp"

	class searchable_array_bag : public searchable_bag, public array_bag
	{
	  public:
	  	searchable_array_bag() = default;
	  	searchable_array_bag(const searchable_array_bag &other);

		bool has();
	};
}


set.cpp:
{
	#include "set.hpp"

	set::set(const searchable_bag &other) : sb(other) {}

	bool set::has() const {
		return sb.has();
	}

	void set::print(){
		return sb.print();
	}

	{...}

	const searchable_bag &set::get_bag() const {
		return sb;
	}
}

set.hpp
{
	#pragma once

	#include "searchable_array_bag.hpp"
	#include "searchable_tree_bag.hpp"

	class set
	{
	  public:
	  		set(const searchable_bag& other);
			~set() = default;

			bool has() const;
			void print();
			{...}

			const searchable_bag& get_bag() const;

		private:
			searchable_bag sb;
	};
}


int main()
{
	#include "set.hpp"
	#include "searchable_array_bag.hpp"
	#include "searchable_tree_bag.hpp"

	searchable_bag *a = new searchable_array_bag;
	searchable_bag *t = new searchable_tree_bag;


	searchable_bag_2 tmp(static_cast<searchable_bag_2 &>(*a));

	set sa(*a);
	set sa(*t);
	delete a;
	delete t;
}
