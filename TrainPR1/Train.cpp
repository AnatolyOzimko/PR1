#include "Train.h"

Train::Train()
{
	ID = 0;
	destination = "";
	number = 1;
	departureTime = "00:00";
	NOP_common = 1;
	NOP_compartment = 1;
	NOP_reservedSeat = 1;
	NOP_lux = 1;
}

Train::Train(int aID)
{
	ID = aID;
	destination = "";
	number = 1;
	departureTime = "00:00";
	NOP_common = 1;
	NOP_compartment = 1;
	NOP_reservedSeat = 1;
	NOP_lux = 1;
}

void Train::setDestination(std::string aDest)
{
	destination = aDest;
}

void Train::setNumber(int aNum)
{
	number = aNum;
}

void Train::setDepartureTime(std::string aDepTime)
{
	departureTime = aDepTime;
}

void Train::setNOP(int aNOP_common, int aNOP_compartment, int aNOP_reservedSeat, int aNOP_lux)
{
	NOP_common = aNOP_common;
	NOP_compartment = aNOP_compartment;
	NOP_reservedSeat = aNOP_reservedSeat;
	NOP_lux = aNOP_lux;
}

std::string Train::getDestination()
{
	return destination;
}

int Train::getNumber()
{
	return number;
}

std::string Train::getDepartureTime()
{
	return departureTime;
}

void Train::getNOP(int& aNOP_common, int& aNOP_compartment, int& aNOP_reservedSeat, int& aNOP_lux)
{
	aNOP_common = NOP_common;
	aNOP_compartment = NOP_compartment;
	aNOP_reservedSeat = NOP_reservedSeat;
	aNOP_lux = NOP_lux;
}

Train::~Train()
{

}