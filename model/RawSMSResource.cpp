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



#include "RawSMSResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

RawSMSResource::RawSMSResource()
{
    m_From = U("");
    m_FromIsSet = false;
    m_Text = U("");
    
}

RawSMSResource::~RawSMSResource()
{
}

void RawSMSResource::validate()
{
    // TODO: implement validation
}

web::json::value RawSMSResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_FromIsSet)
    {
        val[U("from")] = ModelBase::toJson(m_From);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Recipients )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[U("recipients")] = web::json::value::array(jsonArray);
            }
    val[U("text")] = ModelBase::toJson(m_Text);
    

    return val;
}

void RawSMSResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("from")))
    {
        setFrom(ModelBase::stringFromJson(val[U("from")]));
        
    }
    {
        m_Recipients.clear();
        std::vector<web::json::value> jsonArray;
                for( auto& item : val[U("recipients")].as_array() )
        {
            m_Recipients.push_back(ModelBase::int32_tFromJson(item));
            
        }
    }
    setText(ModelBase::stringFromJson(val[U("text")]));
    
}

void RawSMSResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_FromIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("from"), m_From));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Recipients )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + U("recipients"), web::json::value::array(jsonArray), U("application/json")));
            }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("text"), m_Text));
    
}

void RawSMSResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("from")))
    {
        setFrom(ModelBase::stringFromHttpContent(multipart->getContent(U("from"))));
        
    }
    {
        m_Recipients.clear();
        
        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("recipients"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Recipients.push_back(ModelBase::int32_tFromJson(item));
            
        }
    }
    setText(ModelBase::stringFromHttpContent(multipart->getContent(U("text"))));
    
}


utility::string_t RawSMSResource::getFrom() const
{
    return m_From;
}
void RawSMSResource::setFrom(utility::string_t value)
{
    m_From = value;
    m_FromIsSet = true;
}
bool RawSMSResource::fromIsSet() const
{
    return m_FromIsSet;
}
void RawSMSResource::unsetFrom()
{
    m_FromIsSet = false;
}
std::vector<int32_t>& RawSMSResource::getRecipients()
{
    return m_Recipients;
}
utility::string_t RawSMSResource::getText() const
{
    return m_Text;
}
void RawSMSResource::setText(utility::string_t value)
{
    m_Text = value;
    
}

}
}
}
}

