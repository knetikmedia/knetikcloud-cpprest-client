/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "BundledSku.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

BundledSku::BundledSku()
{
    m_Price_override = 0.0;
    m_Price_overrideIsSet = false;
    m_Quantity = 0;
    m_Sku = U("");
}

BundledSku::~BundledSku()
{
}

void BundledSku::validate()
{
    // TODO: implement validation
}

web::json::value BundledSku::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Price_overrideIsSet)
    {
        val[U("price_override")] = ModelBase::toJson(m_Price_override);
    }
    val[U("quantity")] = ModelBase::toJson(m_Quantity);
    val[U("sku")] = ModelBase::toJson(m_Sku);

    return val;
}

void BundledSku::fromJson(web::json::value& val)
{
    if(val.has_field(U("price_override")))
    {
        setPriceOverride(ModelBase::doubleFromJson(val[U("price_override")]));
    }
    setQuantity(ModelBase::int32_tFromJson(val[U("quantity")]));
    setSku(ModelBase::stringFromJson(val[U("sku")]));
}

void BundledSku::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Price_overrideIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("price_override"), m_Price_override));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("quantity"), m_Quantity));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("sku"), m_Sku));
}

void BundledSku::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("price_override")))
    {
        setPriceOverride(ModelBase::doubleFromHttpContent(multipart->getContent(U("price_override"))));
    }
    setQuantity(ModelBase::int32_tFromHttpContent(multipart->getContent(U("quantity"))));
    setSku(ModelBase::stringFromHttpContent(multipart->getContent(U("sku"))));
}

double BundledSku::getPriceOverride() const
{
    return m_Price_override;
}


void BundledSku::setPriceOverride(double value)
{
    m_Price_override = value;
    m_Price_overrideIsSet = true;
}
bool BundledSku::priceOverrideIsSet() const
{
    return m_Price_overrideIsSet;
}

void BundledSku::unsetPrice_override()
{
    m_Price_overrideIsSet = false;
}

int32_t BundledSku::getQuantity() const
{
    return m_Quantity;
}


void BundledSku::setQuantity(int32_t value)
{
    m_Quantity = value;
    
}
utility::string_t BundledSku::getSku() const
{
    return m_Sku;
}


void BundledSku::setSku(utility::string_t value)
{
    m_Sku = value;
    
}
}
}
}
}

