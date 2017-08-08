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



#include "QuickBuyRequest.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

QuickBuyRequest::QuickBuyRequest()
{
    m_Sku = U("");
    m_User_id = 0;
    m_User_idIsSet = false;
}

QuickBuyRequest::~QuickBuyRequest()
{
}

void QuickBuyRequest::validate()
{
    // TODO: implement validation
}

web::json::value QuickBuyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("sku")] = ModelBase::toJson(m_Sku);
    if(m_User_idIsSet)
    {
        val[U("user_id")] = ModelBase::toJson(m_User_id);
    }

    return val;
}

void QuickBuyRequest::fromJson(web::json::value& val)
{
    setSku(ModelBase::stringFromJson(val[U("sku")]));
    if(val.has_field(U("user_id")))
    {
        setUserId(ModelBase::int32_tFromJson(val[U("user_id")]));
    }
}

void QuickBuyRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("sku"), m_Sku));
    if(m_User_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("user_id"), m_User_id));
    }
}

void QuickBuyRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setSku(ModelBase::stringFromHttpContent(multipart->getContent(U("sku"))));
    if(multipart->hasContent(U("user_id")))
    {
        setUserId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("user_id"))));
    }
}

utility::string_t QuickBuyRequest::getSku() const
{
    return m_Sku;
}


void QuickBuyRequest::setSku(utility::string_t value)
{
    m_Sku = value;
    
}
int32_t QuickBuyRequest::getUserId() const
{
    return m_User_id;
}


void QuickBuyRequest::setUserId(int32_t value)
{
    m_User_id = value;
    m_User_idIsSet = true;
}
bool QuickBuyRequest::userIdIsSet() const
{
    return m_User_idIsSet;
}

void QuickBuyRequest::unsetUser_id()
{
    m_User_idIsSet = false;
}

}
}
}
}

