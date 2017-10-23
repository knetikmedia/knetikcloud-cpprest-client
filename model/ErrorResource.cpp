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



#include "ErrorResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

ErrorResource::ErrorResource()
{
    m_DetailsIsSet = false;
    m_FieldIsSet = false;
    m_Message = U("");
    m_MessageIsSet = false;
}

ErrorResource::~ErrorResource()
{
}

void ErrorResource::validate()
{
    // TODO: implement validation
}

web::json::value ErrorResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_DetailsIsSet)
    {
        val[U("details")] = ModelBase::toJson(m_Details);
    }
    if(m_FieldIsSet)
    {
        val[U("field")] = ModelBase::toJson(m_Field);
    }
    if(m_MessageIsSet)
    {
        val[U("message")] = ModelBase::toJson(m_Message);
    }

    return val;
}

void ErrorResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("details")))
    {
        if(!val[U("details")].is_null())
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromJson(val[U("details")]);
            setDetails( newItem );
        }
    }
    if(val.has_field(U("field")))
    {
        if(!val[U("field")].is_null())
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromJson(val[U("field")]);
            setField( newItem );
        }
    }
    if(val.has_field(U("message")))
    {
        setMessage(ModelBase::stringFromJson(val[U("message")]));
    }
}

void ErrorResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_DetailsIsSet)
    {
        if (m_Details.get())
        {
            m_Details->toMultipart(multipart, U("details."));
        }
        
    }
    if(m_FieldIsSet)
    {
        if (m_Field.get())
        {
            m_Field->toMultipart(multipart, U("field."));
        }
        
    }
    if(m_MessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("message"), m_Message));
        
    }
}

void ErrorResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("details")))
    {
        if(multipart->hasContent(U("details")))
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromMultiPart(multipart, U("details."));
            setDetails( newItem );
        }
    }
    if(multipart->hasContent(U("field")))
    {
        if(multipart->hasContent(U("field")))
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromMultiPart(multipart, U("field."));
            setField( newItem );
        }
    }
    if(multipart->hasContent(U("message")))
    {
        setMessage(ModelBase::stringFromHttpContent(multipart->getContent(U("message"))));
    }
}

std::shared_ptr<Object> ErrorResource::getDetails() const
{
    return m_Details;
}


void ErrorResource::setDetails(std::shared_ptr<Object> value)
{
    m_Details = value;
    m_DetailsIsSet = true;
}
bool ErrorResource::detailsIsSet() const
{
    return m_DetailsIsSet;
}

void ErrorResource::unsetDetails()
{
    m_DetailsIsSet = false;
}

std::shared_ptr<Object> ErrorResource::getField() const
{
    return m_Field;
}


void ErrorResource::setField(std::shared_ptr<Object> value)
{
    m_Field = value;
    m_FieldIsSet = true;
}
bool ErrorResource::fieldIsSet() const
{
    return m_FieldIsSet;
}

void ErrorResource::unsetField()
{
    m_FieldIsSet = false;
}

utility::string_t ErrorResource::getMessage() const
{
    return m_Message;
}


void ErrorResource::setMessage(utility::string_t value)
{
    m_Message = value;
    m_MessageIsSet = true;
}
bool ErrorResource::messageIsSet() const
{
    return m_MessageIsSet;
}

void ErrorResource::unsetMessage()
{
    m_MessageIsSet = false;
}

}
}
}
}

