//C++ Primer Plus chapter16ex10.cpp
//vect3.cpp -- using STL functions
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>

struct Review
{
	std::string title;

	int rating{};

	double price{};
};

bool operator<(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2);

bool worseThan(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2);

bool betterThan(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2);

bool expensiveThan(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2);

bool cheaperThan(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2);

bool FillReview(Review & r);

void ShowReview(std::shared_ptr<Review>& r);

int main()
{
	using namespace std;

	vector<shared_ptr<Review> > books;

	Review temp;


	while (FillReview(temp))
	{
		shared_ptr<Review> newtemp(new Review(temp));
		books.push_back(newtemp);
	}
		

	if (books.size() > 0)
	{
		cout << "Thank you. You entered the following "
			<< books.size() << " ratings:\n"
			<< "Rating\tBook\n";

		for_each(books.begin(), books.end(), ShowReview);


		sort(books.begin(), books.end());

		cout << "Sorted by title:\nRating\tBook\n";

		for_each(books.begin(), books.end(), ShowReview);



		cout << "Please choose a type to show: "
			<< "0 for original, 1 for alphabet, 2 for rating ascend,\n"
			<< "3 for rating discend, 4 for price ascend, 5 for price discend,\n"
			<< "q to quit: ";

		int choose;

		while (cin >> choose)
		{
			switch (choose)
			{
			case 0:
				break;

			case 1:
				sort(books.begin(), books.end());
				break;

			case 2:
				sort(books.begin(), books.end(),worseThan);
				break;

			case 3:
				sort(books.begin(), books.end(), betterThan);
				break;

			case 4:
				sort(books.begin(), books.end(), expensiveThan);
				break;

			case 5:
				sort(books.begin(), books.end(), cheaperThan);
				break;
			}
			for_each(books.begin(), books.end(), ShowReview);

			cout << "Please choose a type to show: "
				<< "0 for original, 1 for alphabet, 2 for rating ascend,\n"
				<< "3 for rating discend, 4 for price ascend, 5 for price discend,\n"
				<< "q to quit: ";
		}


	}

	else
		cout << "No entries. ";

	cout << "Bye.\n";

	return 0;
}

bool operator<(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2)
{
	if (r1->title < r2->title)
		return true;

	else if (r1->title == r2->title && r1->rating < r2->rating)
		return true;

	else
		return false;
}

bool worseThan(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2)
{
	if (r1->rating < r2->rating)
		return true;

	else
		return false;
}

bool betterThan(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2)
{
	if (r1->rating > r2->rating)
		return true;

	else
		return false;
}

bool expensiveThan(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2)
{
	if (r1->price > r2->price)
		return true;

	else
		return false;
}

bool cheaperThan(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2)
{
	if (r1->price < r2->price)
		return true;

	else
		return false;
}


bool FillReview(Review& r)
{
	std::cout << "Enter book title (quit to quit): ";

	//std::cin.get();

	std::getline(std::cin, r.title);

	if (r.title == "quit")
		return false;

	std::cout << "Enter book rating: ";

	std::cin >> r.rating;

	if (!std::cin)
		return false;

	std::cout << "Enter the price of the book: ";

	std::cin >> r.price;

	if (!std::cin)
		return false;

	//get rid of rest of input line
	
	while (std::cin.get() != '\n')
		continue;
	

	return true;
}


void ShowReview(std::shared_ptr<Review> &r)
{
	std::cout << r->rating << "\t" << r->title << std::endl;
}