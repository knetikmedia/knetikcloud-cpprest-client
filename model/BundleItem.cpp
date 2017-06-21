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



#include "BundleItem.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

BundleItem::BundleItem()
{
    m_Additional_propertiesIsSet = false;
    m_BehaviorsIsSet = false;
    m_Category = U("");
    m_CategoryIsSet = false;
    m_Created_date = 0;
    m_Created_dateIsSet = false;
    m_Id = 0;
    m_IdIsSet = false;
    m_Long_description = U("");
    m_Long_descriptionIsSet = false;
    m_Name = U("");
    m_Short_description = U("");
    m_Short_descriptionIsSet = false;
    m_Sort = 0;
    m_SortIsSet = false;
    m_TagsIsSet = false;
    m_Template = U("");
    m_TemplateIsSet = false;
    m_Type_hint = U("");
    m_Unique_key = U("");
    m_Unique_keyIsSet = false;
    m_Updated_date = 0;
    m_Updated_dateIsSet = false;
    m_Displayable = false;
    m_DisplayableIsSet = false;
    m_Geo_country_listIsSet = false;
    m_Geo_policy_type = U("");
    m_Geo_policy_typeIsSet = false;
    m_Shipping_tier = 0;
    m_Shipping_tierIsSet = false;
    m_Store_end = 0;
    m_Store_endIsSet = false;
    m_Store_start = 0;
    m_Store_startIsSet = false;
    m_Vendor_id = 0;
    
}

BundleItem::~BundleItem()
{
}

void BundleItem::validate()
{
    // TODO: implement validation
}

web::json::value BundleItem::toJson() const
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
    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_Long_descriptionIsSet)
    {
        val[U("long_description")] = ModelBase::toJson(m_Long_description);
    }
    val[U("name")] = ModelBase::toJson(m_Name);
    if(m_Short_descriptionIsSet)
    {
        val[U("short_description")] = ModelBase::toJson(m_Short_description);
    }
    if(m_SortIsSet)
    {
        val[U("sort")] = ModelBase::toJson(m_Sort);
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
    if(m_Shipping_tierIsSet)
    {
        val[U("shipping_tier")] = ModelBase::toJson(m_Shipping_tier);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Skus )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[U("skus")] = web::json::value::array(jsonArray);
            }
    if(m_Store_endIsSet)
    {
        val[U("store_end")] = ModelBase::toJson(m_Store_end);
    }
    if(m_Store_startIsSet)
    {
        val[U("store_start")] = ModelBase::toJson(m_Store_start);
    }
    val[U("vendor_id")] = ModelBase::toJson(m_Vendor_id);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Bundled_skus )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[U("bundled_skus")] = web::json::value::array(jsonArray);
            }
    

    return val;
}

void BundleItem::fromJson(web::json::value& val)
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
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::int32_tFromJson(val[U("id")]));
    }
    if(val.has_field(U("long_description")))
    {
        setLongDescription(ModelBase::stringFromJson(val[U("long_description")]));
        
    }
    setName(ModelBase::stringFromJson(val[U("name")]));
    if(val.has_field(U("short_description")))
    {
        setShortDescription(ModelBase::stringFromJson(val[U("short_description")]));
        
    }
    if(val.has_field(U("sort")))
    {
        setSort(ModelBase::int32_tFromJson(val[U("sort")]));
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
    if(val.has_field(U("shipping_tier")))
    {
        setShippingTier(ModelBase::int32_tFromJson(val[U("shipping_tier")]));
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
    if(val.has_field(U("store_end")))
    {
        setStoreEnd(ModelBase::int64_tFromJson(val[U("store_end")]));
    }
    if(val.has_field(U("store_start")))
    {
        setStoreStart(ModelBase::int64_tFromJson(val[U("store_start")]));
    }
    setVendorId(ModelBase::int32_tFromJson(val[U("vendor_id")]));
    {
        m_Bundled_skus.clear();
        std::vector<web::json::value> jsonArray;
                for( auto& item : val[U("bundled_skus")].as_array() )
        {
            
            if(item.is_null())
            {
                m_Bundled_skus.push_back( std::shared_ptr<BundledSku>(nullptr) );
            }
            else
            {
                std::shared_ptr<BundledSku> newItem(new BundledSku());
                newItem->fromJson(item);
                m_Bundled_skus.push_back( newItem );
            }
            
        }
    }
    
}

void BundleItem::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_Created_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_date"), m_Created_date));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    }
    if(m_Long_descriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("long_description"), m_Long_description));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    if(m_Short_descriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("short_description"), m_Short_description));
        
    }
    if(m_SortIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("sort"), m_Sort));
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
    if(m_Shipping_tierIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("shipping_tier"), m_Shipping_tier));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Skus )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + U("skus"), web::json::value::array(jsonArray), U("application/json")));
            }
    if(m_Store_endIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("store_end"), m_Store_end));
    }
    if(m_Store_startIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("store_start"), m_Store_start));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("vendor_id"), m_Vendor_id));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Bundled_skus )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + U("bundled_skus"), web::json::value::array(jsonArray), U("application/json")));
            }
    
}

void BundleItem::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created_date"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("id"))));
    }
    if(multipart->hasContent(U("long_description")))
    {
        setLongDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("long_description"))));
        
    }
    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    if(multipart->hasContent(U("short_description")))
    {
        setShortDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("short_description"))));
        
    }
    if(multipart->hasContent(U("sort")))
    {
        setSort(ModelBase::int32_tFromHttpContent(multipart->getContent(U("sort"))));
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
    if(multipart->hasContent(U("shipping_tier")))
    {
        setShippingTier(ModelBase::int32_tFromHttpContent(multipart->getContent(U("shipping_tier"))));
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
    if(multipart->hasContent(U("store_end")))
    {
        setStoreEnd(ModelBase::int64_tFromHttpContent(multipart->getContent(U("store_end"))));
    }
    if(multipart->hasContent(U("store_start")))
    {
        setStoreStart(ModelBase::int64_tFromHttpContent(multipart->getContent(U("store_start"))));
    }
    setVendorId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("vendor_id"))));
    {
        m_Bundled_skus.clear();
        
        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("bundled_skus"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_Bundled_skus.push_back( std::shared_ptr<BundledSku>(nullptr) );
            }
            else
            {
                std::shared_ptr<BundledSku> newItem(new BundledSku());
                newItem->fromJson(item);
                m_Bundled_skus.push_back( newItem );
            }
            
        }
    }
    
}


std::map<utility::string_t, std::shared_ptr<Property>>& BundleItem::getAdditionalProperties()
{
    return m_Additional_properties;
}
bool BundleItem::additional_propertiesIsSet() const
{
    return m_Additional_propertiesIsSet;
}
void BundleItem::unsetAdditional_properties()
{
    m_Additional_propertiesIsSet = false;
}
std::vector<std::shared_ptr<Behavior>>& BundleItem::getBehaviors()
{
    return m_Behaviors;
}
bool BundleItem::behaviorsIsSet() const
{
    return m_BehaviorsIsSet;
}
void BundleItem::unsetBehaviors()
{
    m_BehaviorsIsSet = false;
}
utility::string_t BundleItem::getCategory() const
{
    return m_Category;
}
void BundleItem::setCategory(utility::string_t value)
{
    m_Category = value;
    m_CategoryIsSet = true;
}
bool BundleItem::categoryIsSet() const
{
    return m_CategoryIsSet;
}
void BundleItem::unsetCategory()
{
    m_CategoryIsSet = false;
}
int64_t BundleItem::getCreatedDate() const
{
    return m_Created_date;
}
void BundleItem::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool BundleItem::created_dateIsSet() const
{
    return m_Created_dateIsSet;
}
void BundleItem::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}
int32_t BundleItem::getId() const
{
    return m_Id;
}
void BundleItem::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool BundleItem::idIsSet() const
{
    return m_IdIsSet;
}
void BundleItem::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t BundleItem::getLongDescription() const
{
    return m_Long_description;
}
void BundleItem::setLongDescription(utility::string_t value)
{
    m_Long_description = value;
    m_Long_descriptionIsSet = true;
}
bool BundleItem::long_descriptionIsSet() const
{
    return m_Long_descriptionIsSet;
}
void BundleItem::unsetLong_description()
{
    m_Long_descriptionIsSet = false;
}
utility::string_t BundleItem::getName() const
{
    return m_Name;
}
void BundleItem::setName(utility::string_t value)
{
    m_Name = value;
    
}
utility::string_t BundleItem::getShortDescription() const
{
    return m_Short_description;
}
void BundleItem::setShortDescription(utility::string_t value)
{
    m_Short_description = value;
    m_Short_descriptionIsSet = true;
}
bool BundleItem::short_descriptionIsSet() const
{
    return m_Short_descriptionIsSet;
}
void BundleItem::unsetShort_description()
{
    m_Short_descriptionIsSet = false;
}
int32_t BundleItem::getSort() const
{
    return m_Sort;
}
void BundleItem::setSort(int32_t value)
{
    m_Sort = value;
    m_SortIsSet = true;
}
bool BundleItem::sortIsSet() const
{
    return m_SortIsSet;
}
void BundleItem::unsetSort()
{
    m_SortIsSet = false;
}
std::vector<utility::string_t>& BundleItem::getTags()
{
    return m_Tags;
}
bool BundleItem::tagsIsSet() const
{
    return m_TagsIsSet;
}
void BundleItem::unsetTags()
{
    m_TagsIsSet = false;
}
utility::string_t BundleItem::getTemplate() const
{
    return m_Template;
}
void BundleItem::setTemplate(utility::string_t value)
{
    m_Template = value;
    m_TemplateIsSet = true;
}
bool BundleItem::templateIsSet() const
{
    return m_TemplateIsSet;
}
void BundleItem::unsetTemplate()
{
    m_TemplateIsSet = false;
}
utility::string_t BundleItem::getTypeHint() const
{
    return m_Type_hint;
}
void BundleItem::setTypeHint(utility::string_t value)
{
    m_Type_hint = value;
    
}
utility::string_t BundleItem::getUniqueKey() const
{
    return m_Unique_key;
}
void BundleItem::setUniqueKey(utility::string_t value)
{
    m_Unique_key = value;
    m_Unique_keyIsSet = true;
}
bool BundleItem::unique_keyIsSet() const
{
    return m_Unique_keyIsSet;
}
void BundleItem::unsetUnique_key()
{
    m_Unique_keyIsSet = false;
}
int64_t BundleItem::getUpdatedDate() const
{
    return m_Updated_date;
}
void BundleItem::setUpdatedDate(int64_t value)
{
    m_Updated_date = value;
    m_Updated_dateIsSet = true;
}
bool BundleItem::updated_dateIsSet() const
{
    return m_Updated_dateIsSet;
}
void BundleItem::unsetUpdated_date()
{
    m_Updated_dateIsSet = false;
}
bool BundleItem::getDisplayable() const
{
    return m_Displayable;
}
void BundleItem::setDisplayable(bool value)
{
    m_Displayable = value;
    m_DisplayableIsSet = true;
}
bool BundleItem::displayableIsSet() const
{
    return m_DisplayableIsSet;
}
void BundleItem::unsetDisplayable()
{
    m_DisplayableIsSet = false;
}
std::vector<utility::string_t>& BundleItem::getGeoCountryList()
{
    return m_Geo_country_list;
}
bool BundleItem::geo_country_listIsSet() const
{
    return m_Geo_country_listIsSet;
}
void BundleItem::unsetGeo_country_list()
{
    m_Geo_country_listIsSet = false;
}
utility::string_t BundleItem::getGeoPolicyType() const
{
    return m_Geo_policy_type;
}
void BundleItem::setGeoPolicyType(utility::string_t value)
{
    m_Geo_policy_type = value;
    m_Geo_policy_typeIsSet = true;
}
bool BundleItem::geo_policy_typeIsSet() const
{
    return m_Geo_policy_typeIsSet;
}
void BundleItem::unsetGeo_policy_type()
{
    m_Geo_policy_typeIsSet = false;
}
int32_t BundleItem::getShippingTier() const
{
    return m_Shipping_tier;
}
void BundleItem::setShippingTier(int32_t value)
{
    m_Shipping_tier = value;
    m_Shipping_tierIsSet = true;
}
bool BundleItem::shipping_tierIsSet() const
{
    return m_Shipping_tierIsSet;
}
void BundleItem::unsetShipping_tier()
{
    m_Shipping_tierIsSet = false;
}
std::vector<std::shared_ptr<Sku>>& BundleItem::getSkus()
{
    return m_Skus;
}
int64_t BundleItem::getStoreEnd() const
{
    return m_Store_end;
}
void BundleItem::setStoreEnd(int64_t value)
{
    m_Store_end = value;
    m_Store_endIsSet = true;
}
bool BundleItem::store_endIsSet() const
{
    return m_Store_endIsSet;
}
void BundleItem::unsetStore_end()
{
    m_Store_endIsSet = false;
}
int64_t BundleItem::getStoreStart() const
{
    return m_Store_start;
}
void BundleItem::setStoreStart(int64_t value)
{
    m_Store_start = value;
    m_Store_startIsSet = true;
}
bool BundleItem::store_startIsSet() const
{
    return m_Store_startIsSet;
}
void BundleItem::unsetStore_start()
{
    m_Store_startIsSet = false;
}
int32_t BundleItem::getVendorId() const
{
    return m_Vendor_id;
}
void BundleItem::setVendorId(int32_t value)
{
    m_Vendor_id = value;
    
}
std::vector<std::shared_ptr<BundledSku>>& BundleItem::getBundledSkus()
{
    return m_Bundled_skus;
}

}
}
}
}

