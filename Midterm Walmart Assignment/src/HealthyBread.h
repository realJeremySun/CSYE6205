/*
 * HealthyBread.h
 *
 *  Created on: 2018��2��28��
 *      Author: XiaoCase
 */

#ifndef HEALTHYBREAD_H_
#define HEALTHYBREAD_H_

#include "Item.h"

namespace edu {
namespace neu {
namespace csye6205 {

class HealthyBread : public Item{
private:
	float calories;
public:
	HealthyBread(int _itemNumber,double _price,float _calories,std::string _name);
	virtual ~HealthyBread();



	static bool sort(Item *a, Item *b);

	float getCalories() {
		return calories;
	}

	void setCalories(float calories) {
		this->calories = calories;
	}
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* HEALTHYBREAD_H_ */
