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



#include "Maintenance.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Maintenance::Maintenance()
{
    m_Access_locked = false;
    m_DetailsIsSet = false;
    m_Message = U("");
    
}

Maintenance::~Maintenance()
{
}

void Maintenance::validate()
{
    // TODO: implement validation
}

web::json::value Maintenance::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("access_locked")] = ModelBase::toJson(m_Access_locked);
    if(m_DetailsIsSet)
    {
        val[U("details")] = ModelBase::toJson(m_Details);
    }
    val[U("message")] = ModelBase::toJson(m_Message);
    

    return val;
}

void Maintenance::fromJson(web::json::value& val)
{
    setAccessLocked(ModelBase::boolFromJson(val[U("access_locked")]));
    if(val.has_field(U("details")))
    {
        if(!val[U("details")].is_null())
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromJson(val[U("details")]);
            setDetails( newItem );
        }
        
    }
    setMessage(ModelBase::stringFromJson(val[U("message")]));
    
}

void Maintenance::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("access_locked"), m_Access_locked));
    if(m_DetailsIsSet)
    {
        if (m_Details.get())
        {
            m_Details->toMultipart(multipart, U("details."));
        }
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("message"), m_Message));
    
}

void Maintenance::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setAccessLocked(ModelBase::boolFromHttpContent(multipart->getContent(U("access_locked"))));
    if(multipart->hasContent(U("details")))
    {
        if(multipart->hasContent(U("details")))
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromMultiPart(multipart, U("details."));
            setDetails( newItem );
        }
        
    }
    setMessage(ModelBase::stringFromHttpContent(multipart->getContent(U("message"))));
    
}


bool Maintenance::getAccessLocked() const
{
    return m_Access_locked;
}
void Maintenance::setAccessLocked(bool value)
{
    m_Access_locked = value;
    
}
std::shared_ptr<Object> Maintenance::getDetails() const
{
    return m_Details;
}
void Maintenance::setDetails(std::shared_ptr<Object> value)
{
    m_Details = value;
    m_DetailsIsSet = true;
}
bool Maintenance::detailsIsSet() const
{
    return m_DetailsIsSet;
}
void Maintenance::unsetDetails()
{
    m_DetailsIsSet = false;
}
utility::string_t Maintenance::getMessage() const
{
    return m_Message;
}
void Maintenance::setMessage(utility::string_t value)
{
    m_Message = value;
    
}

}
}
}
}

