/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "RewardSetResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

RewardSetResource::RewardSetResource()
{
    m_Created_date = 0L;
    m_Created_dateIsSet = false;
    m_Currency_rewardsIsSet = false;
    m_Id = 0;
    m_IdIsSet = false;
    m_Item_rewardsIsSet = false;
    m_Long_description = U("");
    m_Long_descriptionIsSet = false;
    m_Max_placing = 0;
    m_Max_placingIsSet = false;
    m_Name = U("");
    m_Short_description = U("");
    m_Short_descriptionIsSet = false;
    m_Unique_key = U("");
    m_Unique_keyIsSet = false;
    m_Updated_date = 0L;
    m_Updated_dateIsSet = false;
}

RewardSetResource::~RewardSetResource()
{
}

void RewardSetResource::validate()
{
    // TODO: implement validation
}

web::json::value RewardSetResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Currency_rewards )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("currency_rewards")] = web::json::value::array(jsonArray);
        }
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Item_rewards )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("item_rewards")] = web::json::value::array(jsonArray);
        }
    }
    if(m_Long_descriptionIsSet)
    {
        val[U("long_description")] = ModelBase::toJson(m_Long_description);
    }
    if(m_Max_placingIsSet)
    {
        val[U("max_placing")] = ModelBase::toJson(m_Max_placing);
    }
    val[U("name")] = ModelBase::toJson(m_Name);
    if(m_Short_descriptionIsSet)
    {
        val[U("short_description")] = ModelBase::toJson(m_Short_description);
    }
    if(m_Unique_keyIsSet)
    {
        val[U("unique_key")] = ModelBase::toJson(m_Unique_key);
    }
    if(m_Updated_dateIsSet)
    {
        val[U("updated_date")] = ModelBase::toJson(m_Updated_date);
    }

    return val;
}

void RewardSetResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
    }
    {
        m_Currency_rewards.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("currency_rewards")))
        {
        for( auto& item : val[U("currency_rewards")].as_array() )
        {
            if(item.is_null())
            {
                m_Currency_rewards.push_back( std::shared_ptr<RewardCurrencyResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<RewardCurrencyResource> newItem(new RewardCurrencyResource());
                newItem->fromJson(item);
                m_Currency_rewards.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::int32_tFromJson(val[U("id")]));
    }
    {
        m_Item_rewards.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("item_rewards")))
        {
        for( auto& item : val[U("item_rewards")].as_array() )
        {
            if(item.is_null())
            {
                m_Item_rewards.push_back( std::shared_ptr<RewardItemResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<RewardItemResource> newItem(new RewardItemResource());
                newItem->fromJson(item);
                m_Item_rewards.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(U("long_description")))
    {
        setLongDescription(ModelBase::stringFromJson(val[U("long_description")]));
    }
    if(val.has_field(U("max_placing")))
    {
        setMaxPlacing(ModelBase::int32_tFromJson(val[U("max_placing")]));
    }
    setName(ModelBase::stringFromJson(val[U("name")]));
    if(val.has_field(U("short_description")))
    {
        setShortDescription(ModelBase::stringFromJson(val[U("short_description")]));
    }
    if(val.has_field(U("unique_key")))
    {
        setUniqueKey(ModelBase::stringFromJson(val[U("unique_key")]));
    }
    if(val.has_field(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromJson(val[U("updated_date")]));
    }
}

void RewardSetResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Created_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_date"), m_Created_date));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Currency_rewards )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("currency_rewards"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Item_rewards )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("item_rewards"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_Long_descriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("long_description"), m_Long_description));
        
    }
    if(m_Max_placingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("max_placing"), m_Max_placing));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    if(m_Short_descriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("short_description"), m_Short_description));
        
    }
    if(m_Unique_keyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("unique_key"), m_Unique_key));
        
    }
    if(m_Updated_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_date"), m_Updated_date));
    }
}

void RewardSetResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created_date"))));
    }
    {
        m_Currency_rewards.clear();
        if(multipart->hasContent(U("currency_rewards")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("currency_rewards"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Currency_rewards.push_back( std::shared_ptr<RewardCurrencyResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<RewardCurrencyResource> newItem(new RewardCurrencyResource());
                newItem->fromJson(item);
                m_Currency_rewards.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("id"))));
    }
    {
        m_Item_rewards.clear();
        if(multipart->hasContent(U("item_rewards")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("item_rewards"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Item_rewards.push_back( std::shared_ptr<RewardItemResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<RewardItemResource> newItem(new RewardItemResource());
                newItem->fromJson(item);
                m_Item_rewards.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(U("long_description")))
    {
        setLongDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("long_description"))));
    }
    if(multipart->hasContent(U("max_placing")))
    {
        setMaxPlacing(ModelBase::int32_tFromHttpContent(multipart->getContent(U("max_placing"))));
    }
    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    if(multipart->hasContent(U("short_description")))
    {
        setShortDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("short_description"))));
    }
    if(multipart->hasContent(U("unique_key")))
    {
        setUniqueKey(ModelBase::stringFromHttpContent(multipart->getContent(U("unique_key"))));
    }
    if(multipart->hasContent(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("updated_date"))));
    }
}

int64_t RewardSetResource::getCreatedDate() const
{
    return m_Created_date;
}


void RewardSetResource::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool RewardSetResource::createdDateIsSet() const
{
    return m_Created_dateIsSet;
}

void RewardSetResource::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}

std::vector<std::shared_ptr<RewardCurrencyResource>>& RewardSetResource::getCurrencyRewards()
{
    return m_Currency_rewards;
}

void RewardSetResource::setCurrencyRewards(std::vector<std::shared_ptr<RewardCurrencyResource>> value)
{
    m_Currency_rewards = value;
    m_Currency_rewardsIsSet = true;
}
bool RewardSetResource::currencyRewardsIsSet() const
{
    return m_Currency_rewardsIsSet;
}

void RewardSetResource::unsetCurrency_rewards()
{
    m_Currency_rewardsIsSet = false;
}

int32_t RewardSetResource::getId() const
{
    return m_Id;
}


void RewardSetResource::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool RewardSetResource::idIsSet() const
{
    return m_IdIsSet;
}

void RewardSetResource::unsetId()
{
    m_IdIsSet = false;
}

std::vector<std::shared_ptr<RewardItemResource>>& RewardSetResource::getItemRewards()
{
    return m_Item_rewards;
}

void RewardSetResource::setItemRewards(std::vector<std::shared_ptr<RewardItemResource>> value)
{
    m_Item_rewards = value;
    m_Item_rewardsIsSet = true;
}
bool RewardSetResource::itemRewardsIsSet() const
{
    return m_Item_rewardsIsSet;
}

void RewardSetResource::unsetItem_rewards()
{
    m_Item_rewardsIsSet = false;
}

utility::string_t RewardSetResource::getLongDescription() const
{
    return m_Long_description;
}


void RewardSetResource::setLongDescription(utility::string_t value)
{
    m_Long_description = value;
    m_Long_descriptionIsSet = true;
}
bool RewardSetResource::longDescriptionIsSet() const
{
    return m_Long_descriptionIsSet;
}

void RewardSetResource::unsetLong_description()
{
    m_Long_descriptionIsSet = false;
}

int32_t RewardSetResource::getMaxPlacing() const
{
    return m_Max_placing;
}


void RewardSetResource::setMaxPlacing(int32_t value)
{
    m_Max_placing = value;
    m_Max_placingIsSet = true;
}
bool RewardSetResource::maxPlacingIsSet() const
{
    return m_Max_placingIsSet;
}

void RewardSetResource::unsetMax_placing()
{
    m_Max_placingIsSet = false;
}

utility::string_t RewardSetResource::getName() const
{
    return m_Name;
}


void RewardSetResource::setName(utility::string_t value)
{
    m_Name = value;
    
}
utility::string_t RewardSetResource::getShortDescription() const
{
    return m_Short_description;
}


void RewardSetResource::setShortDescription(utility::string_t value)
{
    m_Short_description = value;
    m_Short_descriptionIsSet = true;
}
bool RewardSetResource::shortDescriptionIsSet() const
{
    return m_Short_descriptionIsSet;
}

void RewardSetResource::unsetShort_description()
{
    m_Short_descriptionIsSet = false;
}

utility::string_t RewardSetResource::getUniqueKey() const
{
    return m_Unique_key;
}


void RewardSetResource::setUniqueKey(utility::string_t value)
{
    m_Unique_key = value;
    m_Unique_keyIsSet = true;
}
bool RewardSetResource::uniqueKeyIsSet() const
{
    return m_Unique_keyIsSet;
}

void RewardSetResource::unsetUnique_key()
{
    m_Unique_keyIsSet = false;
}

int64_t RewardSetResource::getUpdatedDate() const
{
    return m_Updated_date;
}


void RewardSetResource::setUpdatedDate(int64_t value)
{
    m_Updated_date = value;
    m_Updated_dateIsSet = true;
}
bool RewardSetResource::updatedDateIsSet() const
{
    return m_Updated_dateIsSet;
}

void RewardSetResource::unsetUpdated_date()
{
    m_Updated_dateIsSet = false;
}

}
}
}
}

