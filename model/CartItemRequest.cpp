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



#include "CartItemRequest.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

CartItemRequest::CartItemRequest()
{
    m_Affiliate_key = U("");
    m_Affiliate_keyIsSet = false;
    m_Catalog_sku = U("");
    m_Price_override = 0.0;
    m_Quantity = 0;
    
}

CartItemRequest::~CartItemRequest()
{
}

void CartItemRequest::validate()
{
    // TODO: implement validation
}

web::json::value CartItemRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Affiliate_keyIsSet)
    {
        val[U("affiliate_key")] = ModelBase::toJson(m_Affiliate_key);
    }
    val[U("catalog_sku")] = ModelBase::toJson(m_Catalog_sku);
    val[U("price_override")] = ModelBase::toJson(m_Price_override);
    val[U("quantity")] = ModelBase::toJson(m_Quantity);
    

    return val;
}

void CartItemRequest::fromJson(web::json::value& val)
{
    if(val.has_field(U("affiliate_key")))
    {
        setAffiliateKey(ModelBase::stringFromJson(val[U("affiliate_key")]));
        
    }
    setCatalogSku(ModelBase::stringFromJson(val[U("catalog_sku")]));
    setPriceOverride(ModelBase::doubleFromJson(val[U("price_override")]));
    setQuantity(ModelBase::int32_tFromJson(val[U("quantity")]));
    
}

void CartItemRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Affiliate_keyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("affiliate_key"), m_Affiliate_key));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("catalog_sku"), m_Catalog_sku));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("price_override"), m_Price_override));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("quantity"), m_Quantity));
    
}

void CartItemRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("affiliate_key")))
    {
        setAffiliateKey(ModelBase::stringFromHttpContent(multipart->getContent(U("affiliate_key"))));
        
    }
    setCatalogSku(ModelBase::stringFromHttpContent(multipart->getContent(U("catalog_sku"))));
    setPriceOverride(ModelBase::doubleFromHttpContent(multipart->getContent(U("price_override"))));
    setQuantity(ModelBase::int32_tFromHttpContent(multipart->getContent(U("quantity"))));
    
}


utility::string_t CartItemRequest::getAffiliateKey() const
{
    return m_Affiliate_key;
}
void CartItemRequest::setAffiliateKey(utility::string_t value)
{
    m_Affiliate_key = value;
    m_Affiliate_keyIsSet = true;
}
bool CartItemRequest::affiliate_keyIsSet() const
{
    return m_Affiliate_keyIsSet;
}
void CartItemRequest::unsetAffiliate_key()
{
    m_Affiliate_keyIsSet = false;
}
utility::string_t CartItemRequest::getCatalogSku() const
{
    return m_Catalog_sku;
}
void CartItemRequest::setCatalogSku(utility::string_t value)
{
    m_Catalog_sku = value;
    
}
double CartItemRequest::getPriceOverride() const
{
    return m_Price_override;
}
void CartItemRequest::setPriceOverride(double value)
{
    m_Price_override = value;
    
}
int32_t CartItemRequest::getQuantity() const
{
    return m_Quantity;
}
void CartItemRequest::setQuantity(int32_t value)
{
    m_Quantity = value;
    
}

}
}
}
}

