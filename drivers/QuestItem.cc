/**
 * @file QuestItem.cc
 * @author Diego Antonio Garcia Padilla (github.com/DiegoGarciaPadilla)
 * @brief  This file contains the implementation of the QuestItem class
 * @version 0.1
 * @date 2023-01-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef QUESTITEM_CC // If the file is not defined
#define QUESTITEM_CC // Define the file

#include "../headers/QuestItem.h" // Include the header file

// Constructors

/**
 * @brief Construct a new QuestItem:: QuestItem object
 * 
 */

QuestItem::QuestItem() : Item()
{
    quest = "None";
}

/**
 * @brief Construct a new QuestItem:: QuestItem object
 * 
 * @param name 
 * @param description 
 * @param rarity
 * @param weight 
 * @param price 
 * @param subtype  
 * @param quest 
 */

QuestItem::QuestItem(std::string name, std::string description, std::string rarity, int weight, int price, std::string subtype, std::string quest) : Item(name, description, rarity, weight, price, "QuestItem", subtype)
{
    this->quest = quest;
}


// Getters

/**
 * @brief Get the Quest object
 * 
 * @return std::string 
 */

std::string QuestItem::getQuest()
{
    return quest;
}

// Setters

// There are no setters for this class because the quest is not going to change.

// Methods

/**
 * @brief This method returns a string with the information of the object
 * 
 * @return std::string 
 */

std::string QuestItem::toString()
{
    std::stringstream ss;

    ss << "Name: " << name << std::endl;
    ss << "Description: " << description << std::endl;
    ss << "Weight: " << weight << std::endl;
    ss << "Rarity: " << rarity << std::endl;
    ss << "Price: " << price << std::endl;
    ss << "Type: " << type << std::endl;
    ss << "Subtype: " << subtype << std::endl;
    ss << "Quest: " << quest << std::endl;

    return ss.str();
}

#endif // End of the preprocessor QUESTITEM_CC