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



#include "BatchRequest.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

BatchRequest::BatchRequest()
{
    m_Content_type = U("");
    m_Method = U("");
    m_Timeout = 0;
    m_Token = U("");
    m_TokenIsSet = false;
    m_Uri = U("");
}

BatchRequest::~BatchRequest()
{
}

void BatchRequest::validate()
{
    // TODO: implement validation
}

web::json::value BatchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("body")] = ModelBase::toJson(m_Body);
    val[U("content_type")] = ModelBase::toJson(m_Content_type);
    val[U("method")] = ModelBase::toJson(m_Method);
    val[U("timeout")] = ModelBase::toJson(m_Timeout);
    if(m_TokenIsSet)
    {
        val[U("token")] = ModelBase::toJson(m_Token);
    }
    val[U("uri")] = ModelBase::toJson(m_Uri);

    return val;
}

void BatchRequest::fromJson(web::json::value& val)
{
    std::shared_ptr<Object> newBody(nullptr);
    newBody->fromJson(val[U("body")]);
    setBody( newBody );
    setContentType(ModelBase::stringFromJson(val[U("content_type")]));
    setMethod(ModelBase::stringFromJson(val[U("method")]));
    setTimeout(ModelBase::int32_tFromJson(val[U("timeout")]));
    if(val.has_field(U("token")))
    {
        setToken(ModelBase::stringFromJson(val[U("token")]));
    }
    setUri(ModelBase::stringFromJson(val[U("uri")]));
}

void BatchRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    m_Body->toMultipart(multipart, U("body."));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("content_type"), m_Content_type));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("method"), m_Method));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("timeout"), m_Timeout));
    if(m_TokenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("token"), m_Token));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("uri"), m_Uri));
}

void BatchRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    std::shared_ptr<Object> newBody(nullptr);
    newBody->fromMultiPart(multipart, U("body."));
    setBody( newBody );
    setContentType(ModelBase::stringFromHttpContent(multipart->getContent(U("content_type"))));
    setMethod(ModelBase::stringFromHttpContent(multipart->getContent(U("method"))));
    setTimeout(ModelBase::int32_tFromHttpContent(multipart->getContent(U("timeout"))));
    if(multipart->hasContent(U("token")))
    {
        setToken(ModelBase::stringFromHttpContent(multipart->getContent(U("token"))));
    }
    setUri(ModelBase::stringFromHttpContent(multipart->getContent(U("uri"))));
}

std::shared_ptr<Object> BatchRequest::getBody() const
{
    return m_Body;
}


void BatchRequest::setBody(std::shared_ptr<Object> value)
{
    m_Body = value;
    
}
utility::string_t BatchRequest::getContentType() const
{
    return m_Content_type;
}


void BatchRequest::setContentType(utility::string_t value)
{
    m_Content_type = value;
    
}
utility::string_t BatchRequest::getMethod() const
{
    return m_Method;
}


void BatchRequest::setMethod(utility::string_t value)
{
    m_Method = value;
    
}
int32_t BatchRequest::getTimeout() const
{
    return m_Timeout;
}


void BatchRequest::setTimeout(int32_t value)
{
    m_Timeout = value;
    
}
utility::string_t BatchRequest::getToken() const
{
    return m_Token;
}


void BatchRequest::setToken(utility::string_t value)
{
    m_Token = value;
    m_TokenIsSet = true;
}
bool BatchRequest::tokenIsSet() const
{
    return m_TokenIsSet;
}

void BatchRequest::unsetToken()
{
    m_TokenIsSet = false;
}

utility::string_t BatchRequest::getUri() const
{
    return m_Uri;
}


void BatchRequest::setUri(utility::string_t value)
{
    m_Uri = value;
    
}
}
}
}
}

