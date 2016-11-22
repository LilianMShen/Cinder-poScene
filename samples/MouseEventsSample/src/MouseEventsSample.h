#pragma once

#include "poScene/View.h"
#include "Square.h"
#include "Indicator.h"

using namespace po::scene;

class MouseEventsSample;
typedef std::shared_ptr<MouseEventsSample> MouseEventsSampleRef;

class MouseEventsSample
: public po::scene::View
{
public:
    static MouseEventsSampleRef create();
    
    void setup();
    
protected:
	
private:
	//	Container to hold the indicators
	ViewRef mIndicatorContainer;
	
	//	Event names mapped to indicators
	std::vector<std::string> mIndicatorNames;
	std::map<std::string, IndicatorRef> mIndicators;
	
	//	Container to hold all the squares
	ViewRef mSquareContainer;
	
	//	Create indicators
	void createIndicators();
	
	//	Create squares
	void createSquares();
	
	//	Events on squares
	void onSquareMouseEvent(po::scene::MouseEvent &event, SquareRef square);
	
	//	Events of scene
	void onMouseEvent(po::scene::MouseEvent &event);
	
	//	Show the indicator for the events
	void showIndicator(std::string name);

};
