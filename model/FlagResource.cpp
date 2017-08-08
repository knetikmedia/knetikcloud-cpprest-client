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



#include "FlagResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

FlagResource::FlagResource()
{
    m_Context = U("");
    m_Context_id = U("");
    m_Created_date = 0L;
    m_Created_dateIsSet = false;
    m_Id = 0L;
    m_IdIsSet = false;
    m_Reason = U("");
    m_ReasonIsSet = false;
    m_Updated_date = 0L;
    m_Updated_dateIsSet = false;
    m_UserIsSet = false;
}

FlagResource::~FlagResource()
{
}

void FlagResource::validate()
{
    // TODO: implement validation
}

web::json::value FlagResource::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("context")] = ModelBase::toJson(m_Context);
    val[U("context_id")] = ModelBase::toJson(m_Context_id);
    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_ReasonIsSet)
    {
        val[U("reason")] = ModelBase::toJson(m_Reason);
    }
    if(m_Updated_dateIsSet)
    {
        val[U("updated_date")] = ModelBase::toJson(m_Updated_date);
    }
    if(m_UserIsSet)
    {
        val[U("user")] = ModelBase::toJson(m_User);
    }

    return val;
}

void FlagResource::fromJson(web::json::value& val)
{
    setContext(ModelBase::stringFromJson(val[U("context")]));
    setContextId(ModelBase::stringFromJson(val[U("context_id")]));
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::int64_tFromJson(val[U("id")]));
    }
    if(val.has_field(U("reason")))
    {
        setReason(ModelBase::stringFromJson(val[U("reason")]));
    }
    if(val.has_field(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromJson(val[U("updated_date")]));
    }
    if(val.has_field(U("user")))
    {
        if(!val[U("user")].is_null())
        {
            std::shared_ptr<SimpleUserResource> newItem(new SimpleUserResource());
            newItem->fromJson(val[U("user")]);
            setUser( newItem );
        }
    }
}

void FlagResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("context"), m_Context));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("context_id"), m_Context_id));
    if(m_Created_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_date"), m_Created_date));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    }
    if(m_ReasonIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("reason"), m_Reason));
        
    }
    if(m_Updated_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_date"), m_Updated_date));
    }
    if(m_UserIsSet)
    {
        if (m_User.get())
        {
            m_User->toMultipart(multipart, U("user."));
        }
        
    }
}

void FlagResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setContext(ModelBase::stringFromHttpContent(multipart->getContent(U("context"))));
    setContextId(ModelBase::stringFromHttpContent(multipart->getContent(U("context_id"))));
    if(multipart->hasContent(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created_date"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("id"))));
    }
    if(multipart->hasContent(U("reason")))
    {
        setReason(ModelBase::stringFromHttpContent(multipart->getContent(U("reason"))));
    }
    if(multipart->hasContent(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("updated_date"))));
    }
    if(multipart->hasContent(U("user")))
    {
        if(multipart->hasContent(U("user")))
        {
            std::shared_ptr<SimpleUserResource> newItem(new SimpleUserResource());
            newItem->fromMultiPart(multipart, U("user."));
            setUser( newItem );
        }
    }
}

utility::string_t FlagResource::getContext() const
{
    return m_Context;
}


void FlagResource::setContext(utility::string_t value)
{
    m_Context = value;
    
}
utility::string_t FlagResource::getContextId() const
{
    return m_Context_id;
}


void FlagResource::setContextId(utility::string_t value)
{
    m_Context_id = value;
    
}
int64_t FlagResource::getCreatedDate() const
{
    return m_Created_date;
}


void FlagResource::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool FlagResource::createdDateIsSet() const
{
    return m_Created_dateIsSet;
}

void FlagResource::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}

int64_t FlagResource::getId() const
{
    return m_Id;
}


void FlagResource::setId(int64_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool FlagResource::idIsSet() const
{
    return m_IdIsSet;
}

void FlagResource::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t FlagResource::getReason() const
{
    return m_Reason;
}


void FlagResource::setReason(utility::string_t value)
{
    m_Reason = value;
    m_ReasonIsSet = true;
}
bool FlagResource::reasonIsSet() const
{
    return m_ReasonIsSet;
}

void FlagResource::unsetReason()
{
    m_ReasonIsSet = false;
}

int64_t FlagResource::getUpdatedDate() const
{
    return m_Updated_date;
}


void FlagResource::setUpdatedDate(int64_t value)
{
    m_Updated_date = value;
    m_Updated_dateIsSet = true;
}
bool FlagResource::updatedDateIsSet() const
{
    return m_Updated_dateIsSet;
}

void FlagResource::unsetUpdated_date()
{
    m_Updated_dateIsSet = false;
}

std::shared_ptr<SimpleUserResource> FlagResource::getUser() const
{
    return m_User;
}


void FlagResource::setUser(std::shared_ptr<SimpleUserResource> value)
{
    m_User = value;
    m_UserIsSet = true;
}
bool FlagResource::userIsSet() const
{
    return m_UserIsSet;
}

void FlagResource::unsetUser()
{
    m_UserIsSet = false;
}

}
}
}
}

