/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "ShippingItem.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

ShippingItem::ShippingItem()
{
    m_Additional_propertiesIsSet = false;
    m_BehaviorsIsSet = false;
    m_Category = U("");
    m_CategoryIsSet = false;
    m_CountriesIsSet = false;
    m_Created_date = 0;
    m_Created_dateIsSet = false;
    m_Displayable = false;
    m_DisplayableIsSet = false;
    m_Geo_country_listIsSet = false;
    m_Geo_policy_type = U("");
    m_Geo_policy_typeIsSet = false;
    m_Id = 0;
    m_IdIsSet = false;
    m_Long_description = U("");
    m_Long_descriptionIsSet = false;
    m_Max_tier_total = 0;
    m_Name = U("");
    m_Shipping_tier = 0;
    m_Shipping_tierIsSet = false;
    m_Short_description = U("");
    m_Short_descriptionIsSet = false;
    m_Sort = 0;
    m_SortIsSet = false;
    m_Store_end = 0;
    m_Store_endIsSet = false;
    m_Store_start = 0;
    m_Store_startIsSet = false;
    m_TagsIsSet = false;
    m_Taxable = false;
    m_TaxableIsSet = false;
    m_Template = U("");
    m_TemplateIsSet = false;
    m_Type_hint = U("");
    m_Unique_key = U("");
    m_Unique_keyIsSet = false;
    m_Updated_date = 0;
    m_Updated_dateIsSet = false;
    m_Vendor_id = 0;
    
}

ShippingItem::~ShippingItem()
{
}

void ShippingItem::validate()
{
    // TODO: implement validation
}

web::json::value ShippingItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Additional_propertiesIsSet)
    {
        val[U("additional_properties")] = ModelBase::toJson(m_Additional_properties);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Behaviors )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("behaviors")] = web::json::value::array(jsonArray);
        }
    }
    if(m_CategoryIsSet)
    {
        val[U("category")] = ModelBase::toJson(m_Category);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Countries )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("countries")] = web::json::value::array(jsonArray);
        }
    }
    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
    }
    if(m_DisplayableIsSet)
    {
        val[U("displayable")] = ModelBase::toJson(m_Displayable);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Geo_country_list )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("geo_country_list")] = web::json::value::array(jsonArray);
        }
    }
    if(m_Geo_policy_typeIsSet)
    {
        val[U("geo_policy_type")] = ModelBase::toJson(m_Geo_policy_type);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_Long_descriptionIsSet)
    {
        val[U("long_description")] = ModelBase::toJson(m_Long_description);
    }
    val[U("max_tier_total")] = ModelBase::toJson(m_Max_tier_total);
    val[U("name")] = ModelBase::toJson(m_Name);
    if(m_Shipping_tierIsSet)
    {
        val[U("shipping_tier")] = ModelBase::toJson(m_Shipping_tier);
    }
    if(m_Short_descriptionIsSet)
    {
        val[U("short_description")] = ModelBase::toJson(m_Short_description);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Skus )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[U("skus")] = web::json::value::array(jsonArray);
            }
    if(m_SortIsSet)
    {
        val[U("sort")] = ModelBase::toJson(m_Sort);
    }
    if(m_Store_endIsSet)
    {
        val[U("store_end")] = ModelBase::toJson(m_Store_end);
    }
    if(m_Store_startIsSet)
    {
        val[U("store_start")] = ModelBase::toJson(m_Store_start);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Tags )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("tags")] = web::json::value::array(jsonArray);
        }
    }
    if(m_TaxableIsSet)
    {
        val[U("taxable")] = ModelBase::toJson(m_Taxable);
    }
    if(m_TemplateIsSet)
    {
        val[U("template")] = ModelBase::toJson(m_Template);
    }
    val[U("type_hint")] = ModelBase::toJson(m_Type_hint);
    if(m_Unique_keyIsSet)
    {
        val[U("unique_key")] = ModelBase::toJson(m_Unique_key);
    }
    if(m_Updated_dateIsSet)
    {
        val[U("updated_date")] = ModelBase::toJson(m_Updated_date);
    }
    val[U("vendor_id")] = ModelBase::toJson(m_Vendor_id);
    

    return val;
}

void ShippingItem::fromJson(web::json::value& val)
{
    if(val.has_field(U("additional_properties")))
    {
        if(!val[U("additional_properties")].is_null())
        {
            std::map<utility::string_t, std::shared_ptr<Property>> newItem(std::map<utility::string_t, Property>());
            newItem->fromJson(val[U("additional_properties")]);
            setAdditionalProperties( newItem );
        }
        
    }
    {
        m_Behaviors.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("behaviors")))
        {
        for( auto& item : val[U("behaviors")].as_array() )
        {
            
            if(item.is_null())
            {
                m_Behaviors.push_back( std::shared_ptr<Behavior>(nullptr) );
            }
            else
            {
                std::shared_ptr<Behavior> newItem(new Behavior());
                newItem->fromJson(item);
                m_Behaviors.push_back( newItem );
            }
            
        }
        }
    }
    if(val.has_field(U("category")))
    {
        setCategory(ModelBase::stringFromJson(val[U("category")]));
        
    }
    {
        m_Countries.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("countries")))
        {
        for( auto& item : val[U("countries")].as_array() )
        {
            m_Countries.push_back(ModelBase::stringFromJson(item));
            
        }
        }
    }
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
    }
    if(val.has_field(U("displayable")))
    {
        setDisplayable(ModelBase::boolFromJson(val[U("displayable")]));
    }
    {
        m_Geo_country_list.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("geo_country_list")))
        {
        for( auto& item : val[U("geo_country_list")].as_array() )
        {
            m_Geo_country_list.push_back(ModelBase::stringFromJson(item));
            
        }
        }
    }
    if(val.has_field(U("geo_policy_type")))
    {
        setGeoPolicyType(ModelBase::stringFromJson(val[U("geo_policy_type")]));
        
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::int32_tFromJson(val[U("id")]));
    }
    if(val.has_field(U("long_description")))
    {
        setLongDescription(ModelBase::stringFromJson(val[U("long_description")]));
        
    }
    setMaxTierTotal(ModelBase::int32_tFromJson(val[U("max_tier_total")]));
    setName(ModelBase::stringFromJson(val[U("name")]));
    if(val.has_field(U("shipping_tier")))
    {
        setShippingTier(ModelBase::int32_tFromJson(val[U("shipping_tier")]));
    }
    if(val.has_field(U("short_description")))
    {
        setShortDescription(ModelBase::stringFromJson(val[U("short_description")]));
        
    }
    {
        m_Skus.clear();
        std::vector<web::json::value> jsonArray;
                for( auto& item : val[U("skus")].as_array() )
        {
            
            if(item.is_null())
            {
                m_Skus.push_back( std::shared_ptr<Sku>(nullptr) );
            }
            else
            {
                std::shared_ptr<Sku> newItem(new Sku());
                newItem->fromJson(item);
                m_Skus.push_back( newItem );
            }
            
        }
    }
    if(val.has_field(U("sort")))
    {
        setSort(ModelBase::int32_tFromJson(val[U("sort")]));
    }
    if(val.has_field(U("store_end")))
    {
        setStoreEnd(ModelBase::int64_tFromJson(val[U("store_end")]));
    }
    if(val.has_field(U("store_start")))
    {
        setStoreStart(ModelBase::int64_tFromJson(val[U("store_start")]));
    }
    {
        m_Tags.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("tags")))
        {
        for( auto& item : val[U("tags")].as_array() )
        {
            m_Tags.push_back(ModelBase::stringFromJson(item));
            
        }
        }
    }
    if(val.has_field(U("taxable")))
    {
        setTaxable(ModelBase::boolFromJson(val[U("taxable")]));
    }
    if(val.has_field(U("template")))
    {
        setTemplate(ModelBase::stringFromJson(val[U("template")]));
        
    }
    setTypeHint(ModelBase::stringFromJson(val[U("type_hint")]));
    if(val.has_field(U("unique_key")))
    {
        setUniqueKey(ModelBase::stringFromJson(val[U("unique_key")]));
        
    }
    if(val.has_field(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromJson(val[U("updated_date")]));
    }
    setVendorId(ModelBase::int32_tFromJson(val[U("vendor_id")]));
    
}

void ShippingItem::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Additional_propertiesIsSet)
    {
        if (m_Additional_properties.get())
        {
            m_Additional_properties->toMultipart(multipart, U("additional_properties."));
        }
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Behaviors )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("behaviors"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_CategoryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("category"), m_Category));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Countries )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("countries"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_Created_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_date"), m_Created_date));
    }
    if(m_DisplayableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("displayable"), m_Displayable));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Geo_country_list )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("geo_country_list"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_Geo_policy_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("geo_policy_type"), m_Geo_policy_type));
        
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    }
    if(m_Long_descriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("long_description"), m_Long_description));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("max_tier_total"), m_Max_tier_total));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    if(m_Shipping_tierIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("shipping_tier"), m_Shipping_tier));
    }
    if(m_Short_descriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("short_description"), m_Short_description));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Skus )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + U("skus"), web::json::value::array(jsonArray), U("application/json")));
            }
    if(m_SortIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("sort"), m_Sort));
    }
    if(m_Store_endIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("store_end"), m_Store_end));
    }
    if(m_Store_startIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("store_start"), m_Store_start));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Tags )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("tags"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_TaxableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("taxable"), m_Taxable));
    }
    if(m_TemplateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("template"), m_Template));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("type_hint"), m_Type_hint));
    if(m_Unique_keyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("unique_key"), m_Unique_key));
        
    }
    if(m_Updated_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_date"), m_Updated_date));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("vendor_id"), m_Vendor_id));
    
}

void ShippingItem::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("additional_properties")))
    {
        if(multipart->hasContent(U("additional_properties")))
        {
            std::map<utility::string_t, std::shared_ptr<Property>> newItem(std::map<utility::string_t, Property>());
            newItem->fromMultiPart(multipart, U("additional_properties."));
            setAdditionalProperties( newItem );
        }
        
    }
    {
        m_Behaviors.clear();
        if(multipart->hasContent(U("behaviors")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("behaviors"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_Behaviors.push_back( std::shared_ptr<Behavior>(nullptr) );
            }
            else
            {
                std::shared_ptr<Behavior> newItem(new Behavior());
                newItem->fromJson(item);
                m_Behaviors.push_back( newItem );
            }
            
        }
        }
    }
    if(multipart->hasContent(U("category")))
    {
        setCategory(ModelBase::stringFromHttpContent(multipart->getContent(U("category"))));
        
    }
    {
        m_Countries.clear();
        if(multipart->hasContent(U("countries")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("countries"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Countries.push_back(ModelBase::stringFromJson(item));
            
        }
        }
    }
    if(multipart->hasContent(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created_date"))));
    }
    if(multipart->hasContent(U("displayable")))
    {
        setDisplayable(ModelBase::boolFromHttpContent(multipart->getContent(U("displayable"))));
    }
    {
        m_Geo_country_list.clear();
        if(multipart->hasContent(U("geo_country_list")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("geo_country_list"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Geo_country_list.push_back(ModelBase::stringFromJson(item));
            
        }
        }
    }
    if(multipart->hasContent(U("geo_policy_type")))
    {
        setGeoPolicyType(ModelBase::stringFromHttpContent(multipart->getContent(U("geo_policy_type"))));
        
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("id"))));
    }
    if(multipart->hasContent(U("long_description")))
    {
        setLongDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("long_description"))));
        
    }
    setMaxTierTotal(ModelBase::int32_tFromHttpContent(multipart->getContent(U("max_tier_total"))));
    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    if(multipart->hasContent(U("shipping_tier")))
    {
        setShippingTier(ModelBase::int32_tFromHttpContent(multipart->getContent(U("shipping_tier"))));
    }
    if(multipart->hasContent(U("short_description")))
    {
        setShortDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("short_description"))));
        
    }
    {
        m_Skus.clear();
        
        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("skus"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_Skus.push_back( std::shared_ptr<Sku>(nullptr) );
            }
            else
            {
                std::shared_ptr<Sku> newItem(new Sku());
                newItem->fromJson(item);
                m_Skus.push_back( newItem );
            }
            
        }
    }
    if(multipart->hasContent(U("sort")))
    {
        setSort(ModelBase::int32_tFromHttpContent(multipart->getContent(U("sort"))));
    }
    if(multipart->hasContent(U("store_end")))
    {
        setStoreEnd(ModelBase::int64_tFromHttpContent(multipart->getContent(U("store_end"))));
    }
    if(multipart->hasContent(U("store_start")))
    {
        setStoreStart(ModelBase::int64_tFromHttpContent(multipart->getContent(U("store_start"))));
    }
    {
        m_Tags.clear();
        if(multipart->hasContent(U("tags")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("tags"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Tags.push_back(ModelBase::stringFromJson(item));
            
        }
        }
    }
    if(multipart->hasContent(U("taxable")))
    {
        setTaxable(ModelBase::boolFromHttpContent(multipart->getContent(U("taxable"))));
    }
    if(multipart->hasContent(U("template")))
    {
        setTemplate(ModelBase::stringFromHttpContent(multipart->getContent(U("template"))));
        
    }
    setTypeHint(ModelBase::stringFromHttpContent(multipart->getContent(U("type_hint"))));
    if(multipart->hasContent(U("unique_key")))
    {
        setUniqueKey(ModelBase::stringFromHttpContent(multipart->getContent(U("unique_key"))));
        
    }
    if(multipart->hasContent(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("updated_date"))));
    }
    setVendorId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("vendor_id"))));
    
}


std::map<utility::string_t, std::shared_ptr<Property>>& ShippingItem::getAdditionalProperties()
{
    return m_Additional_properties;
}
bool ShippingItem::additional_propertiesIsSet() const
{
    return m_Additional_propertiesIsSet;
}
void ShippingItem::unsetAdditional_properties()
{
    m_Additional_propertiesIsSet = false;
}
std::vector<std::shared_ptr<Behavior>>& ShippingItem::getBehaviors()
{
    return m_Behaviors;
}
bool ShippingItem::behaviorsIsSet() const
{
    return m_BehaviorsIsSet;
}
void ShippingItem::unsetBehaviors()
{
    m_BehaviorsIsSet = false;
}
utility::string_t ShippingItem::getCategory() const
{
    return m_Category;
}
void ShippingItem::setCategory(utility::string_t value)
{
    m_Category = value;
    m_CategoryIsSet = true;
}
bool ShippingItem::categoryIsSet() const
{
    return m_CategoryIsSet;
}
void ShippingItem::unsetCategory()
{
    m_CategoryIsSet = false;
}
std::vector<utility::string_t>& ShippingItem::getCountries()
{
    return m_Countries;
}
bool ShippingItem::countriesIsSet() const
{
    return m_CountriesIsSet;
}
void ShippingItem::unsetCountries()
{
    m_CountriesIsSet = false;
}
int64_t ShippingItem::getCreatedDate() const
{
    return m_Created_date;
}
void ShippingItem::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool ShippingItem::created_dateIsSet() const
{
    return m_Created_dateIsSet;
}
void ShippingItem::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}
bool ShippingItem::getDisplayable() const
{
    return m_Displayable;
}
void ShippingItem::setDisplayable(bool value)
{
    m_Displayable = value;
    m_DisplayableIsSet = true;
}
bool ShippingItem::displayableIsSet() const
{
    return m_DisplayableIsSet;
}
void ShippingItem::unsetDisplayable()
{
    m_DisplayableIsSet = false;
}
std::vector<utility::string_t>& ShippingItem::getGeoCountryList()
{
    return m_Geo_country_list;
}
bool ShippingItem::geo_country_listIsSet() const
{
    return m_Geo_country_listIsSet;
}
void ShippingItem::unsetGeo_country_list()
{
    m_Geo_country_listIsSet = false;
}
utility::string_t ShippingItem::getGeoPolicyType() const
{
    return m_Geo_policy_type;
}
void ShippingItem::setGeoPolicyType(utility::string_t value)
{
    m_Geo_policy_type = value;
    m_Geo_policy_typeIsSet = true;
}
bool ShippingItem::geo_policy_typeIsSet() const
{
    return m_Geo_policy_typeIsSet;
}
void ShippingItem::unsetGeo_policy_type()
{
    m_Geo_policy_typeIsSet = false;
}
int32_t ShippingItem::getId() const
{
    return m_Id;
}
void ShippingItem::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool ShippingItem::idIsSet() const
{
    return m_IdIsSet;
}
void ShippingItem::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t ShippingItem::getLongDescription() const
{
    return m_Long_description;
}
void ShippingItem::setLongDescription(utility::string_t value)
{
    m_Long_description = value;
    m_Long_descriptionIsSet = true;
}
bool ShippingItem::long_descriptionIsSet() const
{
    return m_Long_descriptionIsSet;
}
void ShippingItem::unsetLong_description()
{
    m_Long_descriptionIsSet = false;
}
int32_t ShippingItem::getMaxTierTotal() const
{
    return m_Max_tier_total;
}
void ShippingItem::setMaxTierTotal(int32_t value)
{
    m_Max_tier_total = value;
    
}
utility::string_t ShippingItem::getName() const
{
    return m_Name;
}
void ShippingItem::setName(utility::string_t value)
{
    m_Name = value;
    
}
int32_t ShippingItem::getShippingTier() const
{
    return m_Shipping_tier;
}
void ShippingItem::setShippingTier(int32_t value)
{
    m_Shipping_tier = value;
    m_Shipping_tierIsSet = true;
}
bool ShippingItem::shipping_tierIsSet() const
{
    return m_Shipping_tierIsSet;
}
void ShippingItem::unsetShipping_tier()
{
    m_Shipping_tierIsSet = false;
}
utility::string_t ShippingItem::getShortDescription() const
{
    return m_Short_description;
}
void ShippingItem::setShortDescription(utility::string_t value)
{
    m_Short_description = value;
    m_Short_descriptionIsSet = true;
}
bool ShippingItem::short_descriptionIsSet() const
{
    return m_Short_descriptionIsSet;
}
void ShippingItem::unsetShort_description()
{
    m_Short_descriptionIsSet = false;
}
std::vector<std::shared_ptr<Sku>>& ShippingItem::getSkus()
{
    return m_Skus;
}
int32_t ShippingItem::getSort() const
{
    return m_Sort;
}
void ShippingItem::setSort(int32_t value)
{
    m_Sort = value;
    m_SortIsSet = true;
}
bool ShippingItem::sortIsSet() const
{
    return m_SortIsSet;
}
void ShippingItem::unsetSort()
{
    m_SortIsSet = false;
}
int64_t ShippingItem::getStoreEnd() const
{
    return m_Store_end;
}
void ShippingItem::setStoreEnd(int64_t value)
{
    m_Store_end = value;
    m_Store_endIsSet = true;
}
bool ShippingItem::store_endIsSet() const
{
    return m_Store_endIsSet;
}
void ShippingItem::unsetStore_end()
{
    m_Store_endIsSet = false;
}
int64_t ShippingItem::getStoreStart() const
{
    return m_Store_start;
}
void ShippingItem::setStoreStart(int64_t value)
{
    m_Store_start = value;
    m_Store_startIsSet = true;
}
bool ShippingItem::store_startIsSet() const
{
    return m_Store_startIsSet;
}
void ShippingItem::unsetStore_start()
{
    m_Store_startIsSet = false;
}
std::vector<utility::string_t>& ShippingItem::getTags()
{
    return m_Tags;
}
bool ShippingItem::tagsIsSet() const
{
    return m_TagsIsSet;
}
void ShippingItem::unsetTags()
{
    m_TagsIsSet = false;
}
bool ShippingItem::getTaxable() const
{
    return m_Taxable;
}
void ShippingItem::setTaxable(bool value)
{
    m_Taxable = value;
    m_TaxableIsSet = true;
}
bool ShippingItem::taxableIsSet() const
{
    return m_TaxableIsSet;
}
void ShippingItem::unsetTaxable()
{
    m_TaxableIsSet = false;
}
utility::string_t ShippingItem::getTemplate() const
{
    return m_Template;
}
void ShippingItem::setTemplate(utility::string_t value)
{
    m_Template = value;
    m_TemplateIsSet = true;
}
bool ShippingItem::templateIsSet() const
{
    return m_TemplateIsSet;
}
void ShippingItem::unsetTemplate()
{
    m_TemplateIsSet = false;
}
utility::string_t ShippingItem::getTypeHint() const
{
    return m_Type_hint;
}
void ShippingItem::setTypeHint(utility::string_t value)
{
    m_Type_hint = value;
    
}
utility::string_t ShippingItem::getUniqueKey() const
{
    return m_Unique_key;
}
void ShippingItem::setUniqueKey(utility::string_t value)
{
    m_Unique_key = value;
    m_Unique_keyIsSet = true;
}
bool ShippingItem::unique_keyIsSet() const
{
    return m_Unique_keyIsSet;
}
void ShippingItem::unsetUnique_key()
{
    m_Unique_keyIsSet = false;
}
int64_t ShippingItem::getUpdatedDate() const
{
    return m_Updated_date;
}
void ShippingItem::setUpdatedDate(int64_t value)
{
    m_Updated_date = value;
    m_Updated_dateIsSet = true;
}
bool ShippingItem::updated_dateIsSet() const
{
    return m_Updated_dateIsSet;
}
void ShippingItem::unsetUpdated_date()
{
    m_Updated_dateIsSet = false;
}
int32_t ShippingItem::getVendorId() const
{
    return m_Vendor_id;
}
void ShippingItem::setVendorId(int32_t value)
{
    m_Vendor_id = value;
    
}

}
}
}
}
