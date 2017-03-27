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



#include "CartLineItem.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

CartLineItem::CartLineItem()
{
    m_Currency_code = U("");
    m_Currency_codeIsSet = false;
    m_Description = U("");
    m_DescriptionIsSet = false;
    m_DiscountIsSet = false;
    m_Line_total = 0.0;
    m_Line_totalIsSet = false;
    m_Name = U("");
    m_NameIsSet = false;
    m_Original_line_total = 0.0;
    m_Original_line_totalIsSet = false;
    m_Original_unit_price = 0.0;
    m_Original_unit_priceIsSet = false;
    m_Qty = 0;
    m_QtyIsSet = false;
    m_Sale_name = U("");
    m_Sale_nameIsSet = false;
    m_Sku = U("");
    m_SkuIsSet = false;
    m_Sku_description = U("");
    m_Sku_descriptionIsSet = false;
    m_Store_item_id = 0;
    m_Store_item_idIsSet = false;
    m_TagsIsSet = false;
    m_Thumb_url = U("");
    m_Thumb_urlIsSet = false;
    m_Unit_price = 0.0;
    m_Unit_priceIsSet = false;
    m_Vendor_id = 0;
    m_Vendor_idIsSet = false;
    m_Vendor_name = U("");
    m_Vendor_nameIsSet = false;
    
}

CartLineItem::~CartLineItem()
{
}

void CartLineItem::validate()
{
    // TODO: implement validation
}

web::json::value CartLineItem::toJson() const
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
    if(m_DiscountIsSet)
    {
        val[U("discount")] = ModelBase::toJson(m_Discount);
    }
    if(m_Line_totalIsSet)
    {
        val[U("line_total")] = ModelBase::toJson(m_Line_total);
    }
    if(m_NameIsSet)
    {
        val[U("name")] = ModelBase::toJson(m_Name);
    }
    if(m_Original_line_totalIsSet)
    {
        val[U("original_line_total")] = ModelBase::toJson(m_Original_line_total);
    }
    if(m_Original_unit_priceIsSet)
    {
        val[U("original_unit_price")] = ModelBase::toJson(m_Original_unit_price);
    }
    if(m_QtyIsSet)
    {
        val[U("qty")] = ModelBase::toJson(m_Qty);
    }
    if(m_Sale_nameIsSet)
    {
        val[U("sale_name")] = ModelBase::toJson(m_Sale_name);
    }
    if(m_SkuIsSet)
    {
        val[U("sku")] = ModelBase::toJson(m_Sku);
    }
    if(m_Sku_descriptionIsSet)
    {
        val[U("sku_description")] = ModelBase::toJson(m_Sku_description);
    }
    if(m_Store_item_idIsSet)
    {
        val[U("store_item_id")] = ModelBase::toJson(m_Store_item_id);
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
    if(m_Thumb_urlIsSet)
    {
        val[U("thumb_url")] = ModelBase::toJson(m_Thumb_url);
    }
    if(m_Unit_priceIsSet)
    {
        val[U("unit_price")] = ModelBase::toJson(m_Unit_price);
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

void CartLineItem::fromJson(web::json::value& val)
{
    if(val.has_field(U("currency_code")))
    {
        setCurrencyCode(ModelBase::stringFromJson(val[U("currency_code")]));
        
    }
    if(val.has_field(U("description")))
    {
        setDescription(ModelBase::stringFromJson(val[U("description")]));
        
    }
    if(val.has_field(U("discount")))
    {
        if(!val[U("discount")].is_null())
        {
            std::shared_ptr<Discount> newItem(new Discount());
            newItem->fromJson(val[U("discount")]);
            setDiscount( newItem );
        }
        
    }
    if(val.has_field(U("line_total")))
    {
        setLineTotal(ModelBase::doubleFromJson(val[U("line_total")]));
    }
    if(val.has_field(U("name")))
    {
        setName(ModelBase::stringFromJson(val[U("name")]));
        
    }
    if(val.has_field(U("original_line_total")))
    {
        setOriginalLineTotal(ModelBase::doubleFromJson(val[U("original_line_total")]));
    }
    if(val.has_field(U("original_unit_price")))
    {
        setOriginalUnitPrice(ModelBase::doubleFromJson(val[U("original_unit_price")]));
    }
    if(val.has_field(U("qty")))
    {
        setQty(ModelBase::int32_tFromJson(val[U("qty")]));
    }
    if(val.has_field(U("sale_name")))
    {
        setSaleName(ModelBase::stringFromJson(val[U("sale_name")]));
        
    }
    if(val.has_field(U("sku")))
    {
        setSku(ModelBase::stringFromJson(val[U("sku")]));
        
    }
    if(val.has_field(U("sku_description")))
    {
        setSkuDescription(ModelBase::stringFromJson(val[U("sku_description")]));
        
    }
    if(val.has_field(U("store_item_id")))
    {
        setStoreItemId(ModelBase::int32_tFromJson(val[U("store_item_id")]));
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
    if(val.has_field(U("thumb_url")))
    {
        setThumbUrl(ModelBase::stringFromJson(val[U("thumb_url")]));
        
    }
    if(val.has_field(U("unit_price")))
    {
        setUnitPrice(ModelBase::doubleFromJson(val[U("unit_price")]));
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

void CartLineItem::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_DiscountIsSet)
    {
        if (m_Discount.get())
        {
            m_Discount->toMultipart(multipart, U("discount."));
        }
        
    }
    if(m_Line_totalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("line_total"), m_Line_total));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
        
    }
    if(m_Original_line_totalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("original_line_total"), m_Original_line_total));
    }
    if(m_Original_unit_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("original_unit_price"), m_Original_unit_price));
    }
    if(m_QtyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("qty"), m_Qty));
    }
    if(m_Sale_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("sale_name"), m_Sale_name));
        
    }
    if(m_SkuIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("sku"), m_Sku));
        
    }
    if(m_Sku_descriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("sku_description"), m_Sku_description));
        
    }
    if(m_Store_item_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("store_item_id"), m_Store_item_id));
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
    if(m_Thumb_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("thumb_url"), m_Thumb_url));
        
    }
    if(m_Unit_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("unit_price"), m_Unit_price));
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

void CartLineItem::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(U("discount")))
    {
        if(multipart->hasContent(U("discount")))
        {
            std::shared_ptr<Discount> newItem(new Discount());
            newItem->fromMultiPart(multipart, U("discount."));
            setDiscount( newItem );
        }
        
    }
    if(multipart->hasContent(U("line_total")))
    {
        setLineTotal(ModelBase::doubleFromHttpContent(multipart->getContent(U("line_total"))));
    }
    if(multipart->hasContent(U("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
        
    }
    if(multipart->hasContent(U("original_line_total")))
    {
        setOriginalLineTotal(ModelBase::doubleFromHttpContent(multipart->getContent(U("original_line_total"))));
    }
    if(multipart->hasContent(U("original_unit_price")))
    {
        setOriginalUnitPrice(ModelBase::doubleFromHttpContent(multipart->getContent(U("original_unit_price"))));
    }
    if(multipart->hasContent(U("qty")))
    {
        setQty(ModelBase::int32_tFromHttpContent(multipart->getContent(U("qty"))));
    }
    if(multipart->hasContent(U("sale_name")))
    {
        setSaleName(ModelBase::stringFromHttpContent(multipart->getContent(U("sale_name"))));
        
    }
    if(multipart->hasContent(U("sku")))
    {
        setSku(ModelBase::stringFromHttpContent(multipart->getContent(U("sku"))));
        
    }
    if(multipart->hasContent(U("sku_description")))
    {
        setSkuDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("sku_description"))));
        
    }
    if(multipart->hasContent(U("store_item_id")))
    {
        setStoreItemId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("store_item_id"))));
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
    if(multipart->hasContent(U("thumb_url")))
    {
        setThumbUrl(ModelBase::stringFromHttpContent(multipart->getContent(U("thumb_url"))));
        
    }
    if(multipart->hasContent(U("unit_price")))
    {
        setUnitPrice(ModelBase::doubleFromHttpContent(multipart->getContent(U("unit_price"))));
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


utility::string_t CartLineItem::getCurrencyCode() const
{
    return m_Currency_code;
}
void CartLineItem::setCurrencyCode(utility::string_t value)
{
    m_Currency_code = value;
    m_Currency_codeIsSet = true;
}
bool CartLineItem::currency_codeIsSet() const
{
    return m_Currency_codeIsSet;
}
void CartLineItem::unsetCurrency_code()
{
    m_Currency_codeIsSet = false;
}
utility::string_t CartLineItem::getDescription() const
{
    return m_Description;
}
void CartLineItem::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool CartLineItem::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void CartLineItem::unsetDescription()
{
    m_DescriptionIsSet = false;
}
std::shared_ptr<Discount> CartLineItem::getDiscount() const
{
    return m_Discount;
}
void CartLineItem::setDiscount(std::shared_ptr<Discount> value)
{
    m_Discount = value;
    m_DiscountIsSet = true;
}
bool CartLineItem::discountIsSet() const
{
    return m_DiscountIsSet;
}
void CartLineItem::unsetDiscount()
{
    m_DiscountIsSet = false;
}
double CartLineItem::getLineTotal() const
{
    return m_Line_total;
}
void CartLineItem::setLineTotal(double value)
{
    m_Line_total = value;
    m_Line_totalIsSet = true;
}
bool CartLineItem::line_totalIsSet() const
{
    return m_Line_totalIsSet;
}
void CartLineItem::unsetLine_total()
{
    m_Line_totalIsSet = false;
}
utility::string_t CartLineItem::getName() const
{
    return m_Name;
}
void CartLineItem::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool CartLineItem::nameIsSet() const
{
    return m_NameIsSet;
}
void CartLineItem::unsetName()
{
    m_NameIsSet = false;
}
double CartLineItem::getOriginalLineTotal() const
{
    return m_Original_line_total;
}
void CartLineItem::setOriginalLineTotal(double value)
{
    m_Original_line_total = value;
    m_Original_line_totalIsSet = true;
}
bool CartLineItem::original_line_totalIsSet() const
{
    return m_Original_line_totalIsSet;
}
void CartLineItem::unsetOriginal_line_total()
{
    m_Original_line_totalIsSet = false;
}
double CartLineItem::getOriginalUnitPrice() const
{
    return m_Original_unit_price;
}
void CartLineItem::setOriginalUnitPrice(double value)
{
    m_Original_unit_price = value;
    m_Original_unit_priceIsSet = true;
}
bool CartLineItem::original_unit_priceIsSet() const
{
    return m_Original_unit_priceIsSet;
}
void CartLineItem::unsetOriginal_unit_price()
{
    m_Original_unit_priceIsSet = false;
}
int32_t CartLineItem::getQty() const
{
    return m_Qty;
}
void CartLineItem::setQty(int32_t value)
{
    m_Qty = value;
    m_QtyIsSet = true;
}
bool CartLineItem::qtyIsSet() const
{
    return m_QtyIsSet;
}
void CartLineItem::unsetQty()
{
    m_QtyIsSet = false;
}
utility::string_t CartLineItem::getSaleName() const
{
    return m_Sale_name;
}
void CartLineItem::setSaleName(utility::string_t value)
{
    m_Sale_name = value;
    m_Sale_nameIsSet = true;
}
bool CartLineItem::sale_nameIsSet() const
{
    return m_Sale_nameIsSet;
}
void CartLineItem::unsetSale_name()
{
    m_Sale_nameIsSet = false;
}
utility::string_t CartLineItem::getSku() const
{
    return m_Sku;
}
void CartLineItem::setSku(utility::string_t value)
{
    m_Sku = value;
    m_SkuIsSet = true;
}
bool CartLineItem::skuIsSet() const
{
    return m_SkuIsSet;
}
void CartLineItem::unsetSku()
{
    m_SkuIsSet = false;
}
utility::string_t CartLineItem::getSkuDescription() const
{
    return m_Sku_description;
}
void CartLineItem::setSkuDescription(utility::string_t value)
{
    m_Sku_description = value;
    m_Sku_descriptionIsSet = true;
}
bool CartLineItem::sku_descriptionIsSet() const
{
    return m_Sku_descriptionIsSet;
}
void CartLineItem::unsetSku_description()
{
    m_Sku_descriptionIsSet = false;
}
int32_t CartLineItem::getStoreItemId() const
{
    return m_Store_item_id;
}
void CartLineItem::setStoreItemId(int32_t value)
{
    m_Store_item_id = value;
    m_Store_item_idIsSet = true;
}
bool CartLineItem::store_item_idIsSet() const
{
    return m_Store_item_idIsSet;
}
void CartLineItem::unsetStore_item_id()
{
    m_Store_item_idIsSet = false;
}
std::vector<utility::string_t>& CartLineItem::getTags()
{
    return m_Tags;
}
bool CartLineItem::tagsIsSet() const
{
    return m_TagsIsSet;
}
void CartLineItem::unsetTags()
{
    m_TagsIsSet = false;
}
utility::string_t CartLineItem::getThumbUrl() const
{
    return m_Thumb_url;
}
void CartLineItem::setThumbUrl(utility::string_t value)
{
    m_Thumb_url = value;
    m_Thumb_urlIsSet = true;
}
bool CartLineItem::thumb_urlIsSet() const
{
    return m_Thumb_urlIsSet;
}
void CartLineItem::unsetThumb_url()
{
    m_Thumb_urlIsSet = false;
}
double CartLineItem::getUnitPrice() const
{
    return m_Unit_price;
}
void CartLineItem::setUnitPrice(double value)
{
    m_Unit_price = value;
    m_Unit_priceIsSet = true;
}
bool CartLineItem::unit_priceIsSet() const
{
    return m_Unit_priceIsSet;
}
void CartLineItem::unsetUnit_price()
{
    m_Unit_priceIsSet = false;
}
int32_t CartLineItem::getVendorId() const
{
    return m_Vendor_id;
}
void CartLineItem::setVendorId(int32_t value)
{
    m_Vendor_id = value;
    m_Vendor_idIsSet = true;
}
bool CartLineItem::vendor_idIsSet() const
{
    return m_Vendor_idIsSet;
}
void CartLineItem::unsetVendor_id()
{
    m_Vendor_idIsSet = false;
}
utility::string_t CartLineItem::getVendorName() const
{
    return m_Vendor_name;
}
void CartLineItem::setVendorName(utility::string_t value)
{
    m_Vendor_name = value;
    m_Vendor_nameIsSet = true;
}
bool CartLineItem::vendor_nameIsSet() const
{
    return m_Vendor_nameIsSet;
}
void CartLineItem::unsetVendor_name()
{
    m_Vendor_nameIsSet = false;
}

}
}
}
}

