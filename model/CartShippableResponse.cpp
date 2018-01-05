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



#include "CartShippableResponse.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

CartShippableResponse::CartShippableResponse()
{
    m_Cart_id = 0;
    m_Cart_idIsSet = false;
    m_Shippable = false;
    m_ShippableIsSet = false;
}

CartShippableResponse::~CartShippableResponse()
{
}

void CartShippableResponse::validate()
{
    // TODO: implement validation
}

web::json::value CartShippableResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Cart_idIsSet)
    {
        val[U("cart_id")] = ModelBase::toJson(m_Cart_id);
    }
    if(m_ShippableIsSet)
    {
        val[U("shippable")] = ModelBase::toJson(m_Shippable);
    }

    return val;
}

void CartShippableResponse::fromJson(web::json::value& val)
{
    if(val.has_field(U("cart_id")))
    {
        setCartId(ModelBase::int32_tFromJson(val[U("cart_id")]));
    }
    if(val.has_field(U("shippable")))
    {
        setShippable(ModelBase::boolFromJson(val[U("shippable")]));
    }
}

void CartShippableResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Cart_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("cart_id"), m_Cart_id));
    }
    if(m_ShippableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("shippable"), m_Shippable));
    }
}

void CartShippableResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("cart_id")))
    {
        setCartId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("cart_id"))));
    }
    if(multipart->hasContent(U("shippable")))
    {
        setShippable(ModelBase::boolFromHttpContent(multipart->getContent(U("shippable"))));
    }
}

int32_t CartShippableResponse::getCartId() const
{
    return m_Cart_id;
}


void CartShippableResponse::setCartId(int32_t value)
{
    m_Cart_id = value;
    m_Cart_idIsSet = true;
}
bool CartShippableResponse::cartIdIsSet() const
{
    return m_Cart_idIsSet;
}

void CartShippableResponse::unsetCart_id()
{
    m_Cart_idIsSet = false;
}

bool CartShippableResponse::getShippable() const
{
    return m_Shippable;
}


void CartShippableResponse::setShippable(bool value)
{
    m_Shippable = value;
    m_ShippableIsSet = true;
}
bool CartShippableResponse::shippableIsSet() const
{
    return m_ShippableIsSet;
}

void CartShippableResponse::unsetShippable()
{
    m_ShippableIsSet = false;
}

}
}
}
}
