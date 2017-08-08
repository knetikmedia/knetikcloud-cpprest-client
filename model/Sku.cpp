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



#include "Sku.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

Sku::Sku()
{
    m_Additional_propertiesIsSet = false;
    m_Currency_code = U("");
    m_Description = U("");
    m_Inventory = 0;
    m_InventoryIsSet = false;
    m_Min_inventory_threshold = 0;
    m_Min_inventory_thresholdIsSet = false;
    m_Original_price = 0.0;
    m_Price = 0.0;
    m_PriceIsSet = false;
    m_Published = false;
    m_PublishedIsSet = false;
    m_Sale_id = 0;
    m_Sale_idIsSet = false;
    m_Sale_name = U("");
    m_Sale_nameIsSet = false;
    m_Sku = U("");
    m_Start_date = 0L;
    m_Start_dateIsSet = false;
    m_Stop_date = 0L;
    m_Stop_dateIsSet = false;
}

Sku::~Sku()
{
}

void Sku::validate()
{
    // TODO: implement validation
}

web::json::value Sku::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Additional_properties )
        {
            web::json::value tmp = web::json::value::object();
            tmp[U("key")] = ModelBase::toJson(item.first);
            tmp[U("value")] = ModelBase::toJson(item.second);
            jsonArray.push_back(tmp);
        }
        if(jsonArray.size() > 0)
        {
            val[U("additional_properties")] = web::json::value::array(jsonArray);
        }
    }
    val[U("currency_code")] = ModelBase::toJson(m_Currency_code);
    val[U("description")] = ModelBase::toJson(m_Description);
    if(m_InventoryIsSet)
    {
        val[U("inventory")] = ModelBase::toJson(m_Inventory);
    }
    if(m_Min_inventory_thresholdIsSet)
    {
        val[U("min_inventory_threshold")] = ModelBase::toJson(m_Min_inventory_threshold);
    }
    val[U("original_price")] = ModelBase::toJson(m_Original_price);
    if(m_PriceIsSet)
    {
        val[U("price")] = ModelBase::toJson(m_Price);
    }
    if(m_PublishedIsSet)
    {
        val[U("published")] = ModelBase::toJson(m_Published);
    }
    if(m_Sale_idIsSet)
    {
        val[U("sale_id")] = ModelBase::toJson(m_Sale_id);
    }
    if(m_Sale_nameIsSet)
    {
        val[U("sale_name")] = ModelBase::toJson(m_Sale_name);
    }
    val[U("sku")] = ModelBase::toJson(m_Sku);
    if(m_Start_dateIsSet)
    {
        val[U("start_date")] = ModelBase::toJson(m_Start_date);
    }
    if(m_Stop_dateIsSet)
    {
        val[U("stop_date")] = ModelBase::toJson(m_Stop_date);
    }

    return val;
}

void Sku::fromJson(web::json::value& val)
{
    {
        m_Additional_properties.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("additional_properties")))
        {
        for( auto& item : val[U("additional_properties")].as_array() )
        {  
            utility::string_t key;
            if(item.has_field(U("key")))
            {
                key = ModelBase::stringFromJson(item[U("key")]);
            }
            if(item.is_null())
            {
                m_Additional_properties.insert(std::pair<utility::string_t,std::shared_ptr<Property>>( key, std::shared_ptr<Property>(nullptr) ));
            }
            else
            {
                std::shared_ptr<Property> newItem(new Property());
                newItem->fromJson(item[U("value")]);
                m_Additional_properties.insert(std::pair<utility::string_t,std::shared_ptr<Property>>( key, newItem ));
            }
        }
        }
    }
    setCurrencyCode(ModelBase::stringFromJson(val[U("currency_code")]));
    setDescription(ModelBase::stringFromJson(val[U("description")]));
    if(val.has_field(U("inventory")))
    {
        setInventory(ModelBase::int32_tFromJson(val[U("inventory")]));
    }
    if(val.has_field(U("min_inventory_threshold")))
    {
        setMinInventoryThreshold(ModelBase::int32_tFromJson(val[U("min_inventory_threshold")]));
    }
    setOriginalPrice(ModelBase::doubleFromJson(val[U("original_price")]));
    if(val.has_field(U("price")))
    {
        setPrice(ModelBase::doubleFromJson(val[U("price")]));
    }
    if(val.has_field(U("published")))
    {
        setPublished(ModelBase::boolFromJson(val[U("published")]));
    }
    if(val.has_field(U("sale_id")))
    {
        setSaleId(ModelBase::int32_tFromJson(val[U("sale_id")]));
    }
    if(val.has_field(U("sale_name")))
    {
        setSaleName(ModelBase::stringFromJson(val[U("sale_name")]));
    }
    setSku(ModelBase::stringFromJson(val[U("sku")]));
    if(val.has_field(U("start_date")))
    {
        setStartDate(ModelBase::int64_tFromJson(val[U("start_date")]));
    }
    if(val.has_field(U("stop_date")))
    {
        setStopDate(ModelBase::int64_tFromJson(val[U("stop_date")]));
    }
}

void Sku::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Additional_properties )
        {
            web::json::value tmp = web::json::value::object();
            tmp[U("key")] = ModelBase::toJson(item.first);
            tmp[U("value")] = ModelBase::toJson(item.second);
            jsonArray.push_back(tmp);
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("additional_properties"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("currency_code"), m_Currency_code));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("description"), m_Description));
    if(m_InventoryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("inventory"), m_Inventory));
    }
    if(m_Min_inventory_thresholdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("min_inventory_threshold"), m_Min_inventory_threshold));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("original_price"), m_Original_price));
    if(m_PriceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("price"), m_Price));
    }
    if(m_PublishedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("published"), m_Published));
    }
    if(m_Sale_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("sale_id"), m_Sale_id));
    }
    if(m_Sale_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("sale_name"), m_Sale_name));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("sku"), m_Sku));
    if(m_Start_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("start_date"), m_Start_date));
    }
    if(m_Stop_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("stop_date"), m_Stop_date));
    }
}

void Sku::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        m_Additional_properties.clear();
        if(multipart->hasContent(U("additional_properties")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("additional_properties"))));
        for( auto& item : jsonArray.as_array() )
        {
            utility::string_t key;
            if(item.has_field(U("key")))
            {
                key = ModelBase::stringFromJson(item[U("key")]);
            }
            if(item.is_null())
            {
                m_Additional_properties.insert(std::pair<utility::string_t,std::shared_ptr<Property>>( key, std::shared_ptr<Property>(nullptr) ));
            }
            else
            {
                std::shared_ptr<Property> newItem(new Property());
                newItem->fromJson(item[U("value")]);
                m_Additional_properties.insert(std::pair<utility::string_t,std::shared_ptr<Property>>( key, newItem ));
            }
        }
        }
    }
    setCurrencyCode(ModelBase::stringFromHttpContent(multipart->getContent(U("currency_code"))));
    setDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("description"))));
    if(multipart->hasContent(U("inventory")))
    {
        setInventory(ModelBase::int32_tFromHttpContent(multipart->getContent(U("inventory"))));
    }
    if(multipart->hasContent(U("min_inventory_threshold")))
    {
        setMinInventoryThreshold(ModelBase::int32_tFromHttpContent(multipart->getContent(U("min_inventory_threshold"))));
    }
    setOriginalPrice(ModelBase::doubleFromHttpContent(multipart->getContent(U("original_price"))));
    if(multipart->hasContent(U("price")))
    {
        setPrice(ModelBase::doubleFromHttpContent(multipart->getContent(U("price"))));
    }
    if(multipart->hasContent(U("published")))
    {
        setPublished(ModelBase::boolFromHttpContent(multipart->getContent(U("published"))));
    }
    if(multipart->hasContent(U("sale_id")))
    {
        setSaleId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("sale_id"))));
    }
    if(multipart->hasContent(U("sale_name")))
    {
        setSaleName(ModelBase::stringFromHttpContent(multipart->getContent(U("sale_name"))));
    }
    setSku(ModelBase::stringFromHttpContent(multipart->getContent(U("sku"))));
    if(multipart->hasContent(U("start_date")))
    {
        setStartDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("start_date"))));
    }
    if(multipart->hasContent(U("stop_date")))
    {
        setStopDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("stop_date"))));
    }
}

std::map<utility::string_t, std::shared_ptr<Property>>& Sku::getAdditionalProperties()
{
    return m_Additional_properties;
}

void Sku::setAdditionalProperties(std::map<utility::string_t, std::shared_ptr<Property>> value)
{
    m_Additional_properties = value;
    m_Additional_propertiesIsSet = true;
}
bool Sku::additionalPropertiesIsSet() const
{
    return m_Additional_propertiesIsSet;
}

void Sku::unsetAdditional_properties()
{
    m_Additional_propertiesIsSet = false;
}

utility::string_t Sku::getCurrencyCode() const
{
    return m_Currency_code;
}


void Sku::setCurrencyCode(utility::string_t value)
{
    m_Currency_code = value;
    
}
utility::string_t Sku::getDescription() const
{
    return m_Description;
}


void Sku::setDescription(utility::string_t value)
{
    m_Description = value;
    
}
int32_t Sku::getInventory() const
{
    return m_Inventory;
}


void Sku::setInventory(int32_t value)
{
    m_Inventory = value;
    m_InventoryIsSet = true;
}
bool Sku::inventoryIsSet() const
{
    return m_InventoryIsSet;
}

void Sku::unsetInventory()
{
    m_InventoryIsSet = false;
}

int32_t Sku::getMinInventoryThreshold() const
{
    return m_Min_inventory_threshold;
}


void Sku::setMinInventoryThreshold(int32_t value)
{
    m_Min_inventory_threshold = value;
    m_Min_inventory_thresholdIsSet = true;
}
bool Sku::minInventoryThresholdIsSet() const
{
    return m_Min_inventory_thresholdIsSet;
}

void Sku::unsetMin_inventory_threshold()
{
    m_Min_inventory_thresholdIsSet = false;
}

double Sku::getOriginalPrice() const
{
    return m_Original_price;
}


void Sku::setOriginalPrice(double value)
{
    m_Original_price = value;
    
}
double Sku::getPrice() const
{
    return m_Price;
}


void Sku::setPrice(double value)
{
    m_Price = value;
    m_PriceIsSet = true;
}
bool Sku::priceIsSet() const
{
    return m_PriceIsSet;
}

void Sku::unsetPrice()
{
    m_PriceIsSet = false;
}

bool Sku::getPublished() const
{
    return m_Published;
}


void Sku::setPublished(bool value)
{
    m_Published = value;
    m_PublishedIsSet = true;
}
bool Sku::publishedIsSet() const
{
    return m_PublishedIsSet;
}

void Sku::unsetPublished()
{
    m_PublishedIsSet = false;
}

int32_t Sku::getSaleId() const
{
    return m_Sale_id;
}


void Sku::setSaleId(int32_t value)
{
    m_Sale_id = value;
    m_Sale_idIsSet = true;
}
bool Sku::saleIdIsSet() const
{
    return m_Sale_idIsSet;
}

void Sku::unsetSale_id()
{
    m_Sale_idIsSet = false;
}

utility::string_t Sku::getSaleName() const
{
    return m_Sale_name;
}


void Sku::setSaleName(utility::string_t value)
{
    m_Sale_name = value;
    m_Sale_nameIsSet = true;
}
bool Sku::saleNameIsSet() const
{
    return m_Sale_nameIsSet;
}

void Sku::unsetSale_name()
{
    m_Sale_nameIsSet = false;
}

utility::string_t Sku::getSku() const
{
    return m_Sku;
}


void Sku::setSku(utility::string_t value)
{
    m_Sku = value;
    
}
int64_t Sku::getStartDate() const
{
    return m_Start_date;
}


void Sku::setStartDate(int64_t value)
{
    m_Start_date = value;
    m_Start_dateIsSet = true;
}
bool Sku::startDateIsSet() const
{
    return m_Start_dateIsSet;
}

void Sku::unsetStart_date()
{
    m_Start_dateIsSet = false;
}

int64_t Sku::getStopDate() const
{
    return m_Stop_date;
}


void Sku::setStopDate(int64_t value)
{
    m_Stop_date = value;
    m_Stop_dateIsSet = true;
}
bool Sku::stopDateIsSet() const
{
    return m_Stop_dateIsSet;
}

void Sku::unsetStop_date()
{
    m_Stop_dateIsSet = false;
}

}
}
}
}

