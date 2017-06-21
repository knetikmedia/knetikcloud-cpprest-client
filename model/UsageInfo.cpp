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



#include "UsageInfo.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

UsageInfo::UsageInfo()
{
    m_Count = 0;
    m_CountIsSet = false;
    m_date = 0;
    m_dateIsSet = false;
    m_Method = U("");
    m_MethodIsSet = false;
    m_Url = U("");
    m_UrlIsSet = false;
    
}

UsageInfo::~UsageInfo()
{
}

void UsageInfo::validate()
{
    // TODO: implement validation
}

web::json::value UsageInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_CountIsSet)
    {
        val[U("count")] = ModelBase::toJson(m_Count);
    }
    if(m_dateIsSet)
    {
        val[U("date")] = ModelBase::toJson(m_date);
    }
    if(m_MethodIsSet)
    {
        val[U("method")] = ModelBase::toJson(m_Method);
    }
    if(m_UrlIsSet)
    {
        val[U("url")] = ModelBase::toJson(m_Url);
    }
    

    return val;
}

void UsageInfo::fromJson(web::json::value& val)
{
    if(val.has_field(U("count")))
    {
        setCount(ModelBase::int64_tFromJson(val[U("count")]));
    }
    if(val.has_field(U("date")))
    {
        setDate(ModelBase::int64_tFromJson(val[U("date")]));
    }
    if(val.has_field(U("method")))
    {
        setMethod(ModelBase::stringFromJson(val[U("method")]));
        
    }
    if(val.has_field(U("url")))
    {
        setUrl(ModelBase::stringFromJson(val[U("url")]));
        
    }
    
}

void UsageInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_CountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("count"), m_Count));
    }
    if(m_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("date"), m_date));
    }
    if(m_MethodIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("method"), m_Method));
        
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("url"), m_Url));
        
    }
    
}

void UsageInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("count")))
    {
        setCount(ModelBase::int64_tFromHttpContent(multipart->getContent(U("count"))));
    }
    if(multipart->hasContent(U("date")))
    {
        setDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("date"))));
    }
    if(multipart->hasContent(U("method")))
    {
        setMethod(ModelBase::stringFromHttpContent(multipart->getContent(U("method"))));
        
    }
    if(multipart->hasContent(U("url")))
    {
        setUrl(ModelBase::stringFromHttpContent(multipart->getContent(U("url"))));
        
    }
    
}


int64_t UsageInfo::getCount() const
{
    return m_Count;
}
void UsageInfo::setCount(int64_t value)
{
    m_Count = value;
    m_CountIsSet = true;
}
bool UsageInfo::countIsSet() const
{
    return m_CountIsSet;
}
void UsageInfo::unsetCount()
{
    m_CountIsSet = false;
}
int64_t UsageInfo::getDate() const
{
    return m_date;
}
void UsageInfo::setDate(int64_t value)
{
    m_date = value;
    m_dateIsSet = true;
}
bool UsageInfo::dateIsSet() const
{
    return m_dateIsSet;
}
void UsageInfo::unsetdate()
{
    m_dateIsSet = false;
}
utility::string_t UsageInfo::getMethod() const
{
    return m_Method;
}
void UsageInfo::setMethod(utility::string_t value)
{
    m_Method = value;
    m_MethodIsSet = true;
}
bool UsageInfo::methodIsSet() const
{
    return m_MethodIsSet;
}
void UsageInfo::unsetMethod()
{
    m_MethodIsSet = false;
}
utility::string_t UsageInfo::getUrl() const
{
    return m_Url;
}
void UsageInfo::setUrl(utility::string_t value)
{
    m_Url = value;
    m_UrlIsSet = true;
}
bool UsageInfo::urlIsSet() const
{
    return m_UrlIsSet;
}
void UsageInfo::unsetUrl()
{
    m_UrlIsSet = false;
}

}
}
}
}

