/*
 * vehicle.h
 *
 *  Created on: Apr 23, 2019
 *      Author: kknight
 */

#ifndef VEHICLE_H_
#define VEHICLE_H_

class vehicle {

protected:
	int data;

public:
	vehicle();
	virtual ~vehicle();
	virtual void propulsion();
	void show();
};



#endif /* VEHICLE_H_ */
