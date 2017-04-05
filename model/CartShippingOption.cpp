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



#include "CartShippingOption.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

CartShippingOption::CartShippingOption()
{
    m_Currency_code = U("");
    m_Currency_codeIsSet = false;
    m_Description = U("");
    m_DescriptionIsSet = false;
    m_Name = U("");
    m_NameIsSet = false;
    m_Original_price = 0.0;
    m_Original_priceIsSet = false;
    m_Price = 0.0;
    m_PriceIsSet = false;
    m_Shipping_item_id = 0;
    m_Shipping_item_idIsSet = false;
    m_Sku = U("");
    m_SkuIsSet = false;
    m_Taxable = false;
    m_TaxableIsSet = false;
    m_Vendor_id = 0;
    m_Vendor_idIsSet = false;
    m_Vendor_name = U("");
    m_Vendor_nameIsSet = false;
    
}

CartShippingOption::~CartShippingOption()
{
}

void CartShippingOption::validate()
{
    // TODO: implement validation
}

web::json::value CartShippingOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Currency_codeIsSet)
    {
        val[U("currency_code")] = ModelBase::toJson(m_Currency_code);
    }
    if(m_DescriptionIsSet)
    {
        val[U("description")] = ModelBase::toJson(m_Description);
    }
    if(m_NameIsSet)
    {
        val[U("name")] = ModelBase::toJson(m_Name);
    }
    if(m_Original_priceIsSet)
    {
        val[U("original_price")] = ModelBase::toJson(m_Original_price);
    }
    if(m_PriceIsSet)
    {
        val[U("price")] = ModelBase::toJson(m_Price);
    }
    if(m_Shipping_item_idIsSet)
    {
        val[U("shipping_item_id")] = ModelBase::toJson(m_Shipping_item_id);
    }
    if(m_SkuIsSet)
    {
        val[U("sku")] = ModelBase::toJson(m_Sku);
    }
    if(m_TaxableIsSet)
    {
        val[U("taxable")] = ModelBase::toJson(m_Taxable);
    }
    if(m_Vendor_idIsSet)
    {
        val[U("vendor_id")] = ModelBase::toJson(m_Vendor_id);
    }
    if(m_Vendor_nameIsSet)
    {
        val[U("vendor_name")] = ModelBase::toJson(m_Vendor_name);
    }
    

    return val;
}

void CartShippingOption::fromJson(web::json::value& val)
{
    if(val.has_field(U("currency_code")))
    {
        setCurrencyCode(ModelBase::stringFromJson(val[U("currency_code")]));
        
    }
    if(val.has_field(U("description")))
    {
        setDescription(ModelBase::stringFromJson(val[U("description")]));
        
    }
    if(val.has_field(U("name")))
    {
        setName(ModelBase::stringFromJson(val[U("name")]));
        
    }
    if(val.has_field(U("original_price")))
    {
        setOriginalPrice(ModelBase::doubleFromJson(val[U("original_price")]));
    }
    if(val.has_field(U("price")))
    {
        setPrice(ModelBase::doubleFromJson(val[U("price")]));
    }
    if(val.has_field(U("shipping_item_id")))
    {
        setShippingItemId(ModelBase::int32_tFromJson(val[U("shipping_item_id")]));
    }
    if(val.has_field(U("sku")))
    {
        setSku(ModelBase::stringFromJson(val[U("sku")]));
        
    }
    if(val.has_field(U("taxable")))
    {
        setTaxable(ModelBase::boolFromJson(val[U("taxable")]));
    }
    if(val.has_field(U("vendor_id")))
    {
        setVendorId(ModelBase::int32_tFromJson(val[U("vendor_id")]));
    }
    if(val.has_field(U("vendor_name")))
    {
        setVendorName(ModelBase::stringFromJson(val[U("vendor_name")]));
        
    }
    
}

void CartShippingOption::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Currency_codeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("currency_code"), m_Currency_code));
        
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("description"), m_Description));
        
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
        
    }
    if(m_Original_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("original_price"), m_Original_price));
    }
    if(m_PriceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("price"), m_Price));
    }
    if(m_Shipping_item_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("shipping_item_id"), m_Shipping_item_id));
    }
    if(m_SkuIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("sku"), m_Sku));
        
    }
    if(m_TaxableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("taxable"), m_Taxable));
    }
    if(m_Vendor_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("vendor_id"), m_Vendor_id));
    }
    if(m_Vendor_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("vendor_name"), m_Vendor_name));
        
    }
    
}

void CartShippingOption::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("currency_code")))
    {
        setCurrencyCode(ModelBase::stringFromHttpContent(multipart->getContent(U("currency_code"))));
        
    }
    if(multipart->hasContent(U("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("description"))));
        
    }
    if(multipart->hasContent(U("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
        
    }
    if(multipart->hasContent(U("original_price")))
    {
        setOriginalPrice(ModelBase::doubleFromHttpContent(multipart->getContent(U("original_price"))));
    }
    if(multipart->hasContent(U("price")))
    {
        setPrice(ModelBase::doubleFromHttpContent(multipart->getContent(U("price"))));
    }
    if(multipart->hasContent(U("shipping_item_id")))
    {
        setShippingItemId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("shipping_item_id"))));
    }
    if(multipart->hasContent(U("sku")))
    {
        setSku(ModelBase::stringFromHttpContent(multipart->getContent(U("sku"))));
        
    }
    if(multipart->hasContent(U("taxable")))
    {
        setTaxable(ModelBase::boolFromHttpContent(multipart->getContent(U("taxable"))));
    }
    if(multipart->hasContent(U("vendor_id")))
    {
        setVendorId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("vendor_id"))));
    }
    if(multipart->hasContent(U("vendor_name")))
    {
        setVendorName(ModelBase::stringFromHttpContent(multipart->getContent(U("vendor_name"))));
        
    }
    
}


utility::string_t CartShippingOption::getCurrencyCode() const
{
    return m_Currency_code;
}
void CartShippingOption::setCurrencyCode(utility::string_t value)
{
    m_Currency_code = value;
    m_Currency_codeIsSet = true;
}
bool CartShippingOption::currency_codeIsSet() const
{
    return m_Currency_codeIsSet;
}
void CartShippingOption::unsetCurrency_code()
{
    m_Currency_codeIsSet = false;
}
utility::string_t CartShippingOption::getDescription() const
{
    return m_Description;
}
void CartShippingOption::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool CartShippingOption::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void CartShippingOption::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t CartShippingOption::getName() const
{
    return m_Name;
}
void CartShippingOption::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool CartShippingOption::nameIsSet() const
{
    return m_NameIsSet;
}
void CartShippingOption::unsetName()
{
    m_NameIsSet = false;
}
double CartShippingOption::getOriginalPrice() const
{
    return m_Original_price;
}
void CartShippingOption::setOriginalPrice(double value)
{
    m_Original_price = value;
    m_Original_priceIsSet = true;
}
bool CartShippingOption::original_priceIsSet() const
{
    return m_Original_priceIsSet;
}
void CartShippingOption::unsetOriginal_price()
{
    m_Original_priceIsSet = false;
}
double CartShippingOption::getPrice() const
{
    return m_Price;
}
void CartShippingOption::setPrice(double value)
{
    m_Price = value;
    m_PriceIsSet = true;
}
bool CartShippingOption::priceIsSet() const
{
    return m_PriceIsSet;
}
void CartShippingOption::unsetPrice()
{
    m_PriceIsSet = false;
}
int32_t CartShippingOption::getShippingItemId() const
{
    return m_Shipping_item_id;
}
void CartShippingOption::setShippingItemId(int32_t value)
{
    m_Shipping_item_id = value;
    m_Shipping_item_idIsSet = true;
}
bool CartShippingOption::shipping_item_idIsSet() const
{
    return m_Shipping_item_idIsSet;
}
void CartShippingOption::unsetShipping_item_id()
{
    m_Shipping_item_idIsSet = false;
}
utility::string_t CartShippingOption::getSku() const
{
    return m_Sku;
}
void CartShippingOption::setSku(utility::string_t value)
{
    m_Sku = value;
    m_SkuIsSet = true;
}
bool CartShippingOption::skuIsSet() const
{
    return m_SkuIsSet;
}
void CartShippingOption::unsetSku()
{
    m_SkuIsSet = false;
}
bool CartShippingOption::getTaxable() const
{
    return m_Taxable;
}
void CartShippingOption::setTaxable(bool value)
{
    m_Taxable = value;
    m_TaxableIsSet = true;
}
bool CartShippingOption::taxableIsSet() const
{
    return m_TaxableIsSet;
}
void CartShippingOption::unsetTaxable()
{
    m_TaxableIsSet = false;
}
int32_t CartShippingOption::getVendorId() const
{
    return m_Vendor_id;
}
void CartShippingOption::setVendorId(int32_t value)
{
    m_Vendor_id = value;
    m_Vendor_idIsSet = true;
}
bool CartShippingOption::vendor_idIsSet() const
{
    return m_Vendor_idIsSet;
}
void CartShippingOption::unsetVendor_id()
{
    m_Vendor_idIsSet = false;
}
utility::string_t CartShippingOption::getVendorName() const
{
    return m_Vendor_name;
}
void CartShippingOption::setVendorName(utility::string_t value)
{
    m_Vendor_name = value;
    m_Vendor_nameIsSet = true;
}
bool CartShippingOption::vendor_nameIsSet() const
{
    return m_Vendor_nameIsSet;
}
void CartShippingOption::unsetVendor_name()
{
    m_Vendor_nameIsSet = false;
}

}
}
}
}

