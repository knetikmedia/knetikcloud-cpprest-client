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



#include "CouponDefinition.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

CouponDefinition::CouponDefinition()
{
    m_Code = U("");
    m_Description = U("");
    m_DescriptionIsSet = false;
    m_Discount_type = U("");
    m_Exclusive = false;
    m_ExclusiveIsSet = false;
    m_Max_discount = 0.0;
    m_Max_discountIsSet = false;
    m_Max_quantity = 0;
    m_Max_quantityIsSet = false;
    m_Min_cart_total = 0.0;
    m_Min_cart_totalIsSet = false;
    m_Name = U("");
    m_Self_exclusive = false;
    m_Self_exclusiveIsSet = false;
    m_Target_item_id = 0;
    m_Target_item_idIsSet = false;
    m_Type = U("");
    m_Unique_key = U("");
    m_Valid_for_tagsIsSet = false;
    m_Value = 0.0;
    m_Vendor_id = 0;
    m_Vendor_idIsSet = false;
    
}

CouponDefinition::~CouponDefinition()
{
}

void CouponDefinition::validate()
{
    // TODO: implement validation
}

web::json::value CouponDefinition::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("code")] = ModelBase::toJson(m_Code);
    if(m_DescriptionIsSet)
    {
        val[U("description")] = ModelBase::toJson(m_Description);
    }
    val[U("discount_type")] = ModelBase::toJson(m_Discount_type);
    if(m_ExclusiveIsSet)
    {
        val[U("exclusive")] = ModelBase::toJson(m_Exclusive);
    }
    if(m_Max_discountIsSet)
    {
        val[U("max_discount")] = ModelBase::toJson(m_Max_discount);
    }
    if(m_Max_quantityIsSet)
    {
        val[U("max_quantity")] = ModelBase::toJson(m_Max_quantity);
    }
    if(m_Min_cart_totalIsSet)
    {
        val[U("min_cart_total")] = ModelBase::toJson(m_Min_cart_total);
    }
    val[U("name")] = ModelBase::toJson(m_Name);
    if(m_Self_exclusiveIsSet)
    {
        val[U("self_exclusive")] = ModelBase::toJson(m_Self_exclusive);
    }
    if(m_Target_item_idIsSet)
    {
        val[U("target_item_id")] = ModelBase::toJson(m_Target_item_id);
    }
    val[U("type")] = ModelBase::toJson(m_Type);
    val[U("unique_key")] = ModelBase::toJson(m_Unique_key);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Valid_for_tags )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("valid_for_tags")] = web::json::value::array(jsonArray);
        }
    }
    val[U("value")] = ModelBase::toJson(m_Value);
    if(m_Vendor_idIsSet)
    {
        val[U("vendor_id")] = ModelBase::toJson(m_Vendor_id);
    }
    

    return val;
}

void CouponDefinition::fromJson(web::json::value& val)
{
    setCode(ModelBase::stringFromJson(val[U("code")]));
    if(val.has_field(U("description")))
    {
        setDescription(ModelBase::stringFromJson(val[U("description")]));
        
    }
    setDiscountType(ModelBase::stringFromJson(val[U("discount_type")]));
    if(val.has_field(U("exclusive")))
    {
        setExclusive(ModelBase::boolFromJson(val[U("exclusive")]));
    }
    if(val.has_field(U("max_discount")))
    {
        setMaxDiscount(ModelBase::doubleFromJson(val[U("max_discount")]));
    }
    if(val.has_field(U("max_quantity")))
    {
        setMaxQuantity(ModelBase::int32_tFromJson(val[U("max_quantity")]));
    }
    if(val.has_field(U("min_cart_total")))
    {
        setMinCartTotal(ModelBase::doubleFromJson(val[U("min_cart_total")]));
    }
    setName(ModelBase::stringFromJson(val[U("name")]));
    if(val.has_field(U("self_exclusive")))
    {
        setSelfExclusive(ModelBase::boolFromJson(val[U("self_exclusive")]));
    }
    if(val.has_field(U("target_item_id")))
    {
        setTargetItemId(ModelBase::int32_tFromJson(val[U("target_item_id")]));
    }
    setType(ModelBase::stringFromJson(val[U("type")]));
    setUniqueKey(ModelBase::stringFromJson(val[U("unique_key")]));
    {
        m_Valid_for_tags.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("valid_for_tags")))
        {
        for( auto& item : val[U("valid_for_tags")].as_array() )
        {
            m_Valid_for_tags.push_back(ModelBase::stringFromJson(item));
            
        }
        }
    }
    setValue(ModelBase::doubleFromJson(val[U("value")]));
    if(val.has_field(U("vendor_id")))
    {
        setVendorId(ModelBase::int32_tFromJson(val[U("vendor_id")]));
    }
    
}

void CouponDefinition::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("code"), m_Code));
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("description"), m_Description));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("discount_type"), m_Discount_type));
    if(m_ExclusiveIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("exclusive"), m_Exclusive));
    }
    if(m_Max_discountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("max_discount"), m_Max_discount));
    }
    if(m_Max_quantityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("max_quantity"), m_Max_quantity));
    }
    if(m_Min_cart_totalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("min_cart_total"), m_Min_cart_total));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    if(m_Self_exclusiveIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("self_exclusive"), m_Self_exclusive));
    }
    if(m_Target_item_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("target_item_id"), m_Target_item_id));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("unique_key"), m_Unique_key));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Valid_for_tags )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("valid_for_tags"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("value"), m_Value));
    if(m_Vendor_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("vendor_id"), m_Vendor_id));
    }
    
}

void CouponDefinition::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setCode(ModelBase::stringFromHttpContent(multipart->getContent(U("code"))));
    if(multipart->hasContent(U("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("description"))));
        
    }
    setDiscountType(ModelBase::stringFromHttpContent(multipart->getContent(U("discount_type"))));
    if(multipart->hasContent(U("exclusive")))
    {
        setExclusive(ModelBase::boolFromHttpContent(multipart->getContent(U("exclusive"))));
    }
    if(multipart->hasContent(U("max_discount")))
    {
        setMaxDiscount(ModelBase::doubleFromHttpContent(multipart->getContent(U("max_discount"))));
    }
    if(multipart->hasContent(U("max_quantity")))
    {
        setMaxQuantity(ModelBase::int32_tFromHttpContent(multipart->getContent(U("max_quantity"))));
    }
    if(multipart->hasContent(U("min_cart_total")))
    {
        setMinCartTotal(ModelBase::doubleFromHttpContent(multipart->getContent(U("min_cart_total"))));
    }
    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    if(multipart->hasContent(U("self_exclusive")))
    {
        setSelfExclusive(ModelBase::boolFromHttpContent(multipart->getContent(U("self_exclusive"))));
    }
    if(multipart->hasContent(U("target_item_id")))
    {
        setTargetItemId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("target_item_id"))));
    }
    setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    setUniqueKey(ModelBase::stringFromHttpContent(multipart->getContent(U("unique_key"))));
    {
        m_Valid_for_tags.clear();
        if(multipart->hasContent(U("valid_for_tags")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("valid_for_tags"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Valid_for_tags.push_back(ModelBase::stringFromJson(item));
            
        }
        }
    }
    setValue(ModelBase::doubleFromHttpContent(multipart->getContent(U("value"))));
    if(multipart->hasContent(U("vendor_id")))
    {
        setVendorId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("vendor_id"))));
    }
    
}


utility::string_t CouponDefinition::getCode() const
{
    return m_Code;
}
void CouponDefinition::setCode(utility::string_t value)
{
    m_Code = value;
    
}
utility::string_t CouponDefinition::getDescription() const
{
    return m_Description;
}
void CouponDefinition::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool CouponDefinition::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void CouponDefinition::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t CouponDefinition::getDiscountType() const
{
    return m_Discount_type;
}
void CouponDefinition::setDiscountType(utility::string_t value)
{
    m_Discount_type = value;
    
}
bool CouponDefinition::getExclusive() const
{
    return m_Exclusive;
}
void CouponDefinition::setExclusive(bool value)
{
    m_Exclusive = value;
    m_ExclusiveIsSet = true;
}
bool CouponDefinition::exclusiveIsSet() const
{
    return m_ExclusiveIsSet;
}
void CouponDefinition::unsetExclusive()
{
    m_ExclusiveIsSet = false;
}
double CouponDefinition::getMaxDiscount() const
{
    return m_Max_discount;
}
void CouponDefinition::setMaxDiscount(double value)
{
    m_Max_discount = value;
    m_Max_discountIsSet = true;
}
bool CouponDefinition::max_discountIsSet() const
{
    return m_Max_discountIsSet;
}
void CouponDefinition::unsetMax_discount()
{
    m_Max_discountIsSet = false;
}
int32_t CouponDefinition::getMaxQuantity() const
{
    return m_Max_quantity;
}
void CouponDefinition::setMaxQuantity(int32_t value)
{
    m_Max_quantity = value;
    m_Max_quantityIsSet = true;
}
bool CouponDefinition::max_quantityIsSet() const
{
    return m_Max_quantityIsSet;
}
void CouponDefinition::unsetMax_quantity()
{
    m_Max_quantityIsSet = false;
}
double CouponDefinition::getMinCartTotal() const
{
    return m_Min_cart_total;
}
void CouponDefinition::setMinCartTotal(double value)
{
    m_Min_cart_total = value;
    m_Min_cart_totalIsSet = true;
}
bool CouponDefinition::min_cart_totalIsSet() const
{
    return m_Min_cart_totalIsSet;
}
void CouponDefinition::unsetMin_cart_total()
{
    m_Min_cart_totalIsSet = false;
}
utility::string_t CouponDefinition::getName() const
{
    return m_Name;
}
void CouponDefinition::setName(utility::string_t value)
{
    m_Name = value;
    
}
bool CouponDefinition::getSelfExclusive() const
{
    return m_Self_exclusive;
}
void CouponDefinition::setSelfExclusive(bool value)
{
    m_Self_exclusive = value;
    m_Self_exclusiveIsSet = true;
}
bool CouponDefinition::self_exclusiveIsSet() const
{
    return m_Self_exclusiveIsSet;
}
void CouponDefinition::unsetSelf_exclusive()
{
    m_Self_exclusiveIsSet = false;
}
int32_t CouponDefinition::getTargetItemId() const
{
    return m_Target_item_id;
}
void CouponDefinition::setTargetItemId(int32_t value)
{
    m_Target_item_id = value;
    m_Target_item_idIsSet = true;
}
bool CouponDefinition::target_item_idIsSet() const
{
    return m_Target_item_idIsSet;
}
void CouponDefinition::unsetTarget_item_id()
{
    m_Target_item_idIsSet = false;
}
utility::string_t CouponDefinition::getType() const
{
    return m_Type;
}
void CouponDefinition::setType(utility::string_t value)
{
    m_Type = value;
    
}
utility::string_t CouponDefinition::getUniqueKey() const
{
    return m_Unique_key;
}
void CouponDefinition::setUniqueKey(utility::string_t value)
{
    m_Unique_key = value;
    
}
std::vector<utility::string_t>& CouponDefinition::getValidForTags()
{
    return m_Valid_for_tags;
}
bool CouponDefinition::valid_for_tagsIsSet() const
{
    return m_Valid_for_tagsIsSet;
}
void CouponDefinition::unsetValid_for_tags()
{
    m_Valid_for_tagsIsSet = false;
}
double CouponDefinition::getValue() const
{
    return m_Value;
}
void CouponDefinition::setValue(double value)
{
    m_Value = value;
    
}
int32_t CouponDefinition::getVendorId() const
{
    return m_Vendor_id;
}
void CouponDefinition::setVendorId(int32_t value)
{
    m_Vendor_id = value;
    m_Vendor_idIsSet = true;
}
bool CouponDefinition::vendor_idIsSet() const
{
    return m_Vendor_idIsSet;
}
void CouponDefinition::unsetVendor_id()
{
    m_Vendor_idIsSet = false;
}

}
}
}
}

