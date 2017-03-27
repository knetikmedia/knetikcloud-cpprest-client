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



#include "CommentResource.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

CommentResource::CommentResource()
{
    m_Content = U("");
    m_Context = U("");
    m_ContextIsSet = false;
    m_Context_id = 0;
    m_Context_idIsSet = false;
    m_Created_date = 0;
    m_Created_dateIsSet = false;
    m_Id = 0;
    m_IdIsSet = false;
    m_Summary = U("");
    m_SummaryIsSet = false;
    m_Updated_date = 0;
    m_Updated_dateIsSet = false;
    m_UserIsSet = false;
    
}

CommentResource::~CommentResource()
{
}

void CommentResource::validate()
{
    // TODO: implement validation
}

web::json::value CommentResource::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("content")] = ModelBase::toJson(m_Content);
    if(m_ContextIsSet)
    {
        val[U("context")] = ModelBase::toJson(m_Context);
    }
    if(m_Context_idIsSet)
    {
        val[U("context_id")] = ModelBase::toJson(m_Context_id);
    }
    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_SummaryIsSet)
    {
        val[U("summary")] = ModelBase::toJson(m_Summary);
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

void CommentResource::fromJson(web::json::value& val)
{
    setContent(ModelBase::stringFromJson(val[U("content")]));
    if(val.has_field(U("context")))
    {
        setContext(ModelBase::stringFromJson(val[U("context")]));
        
    }
    if(val.has_field(U("context_id")))
    {
        setContextId(ModelBase::int32_tFromJson(val[U("context_id")]));
    }
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::int64_tFromJson(val[U("id")]));
    }
    if(val.has_field(U("summary")))
    {
        setSummary(ModelBase::stringFromJson(val[U("summary")]));
        
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

void CommentResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("content"), m_Content));
    if(m_ContextIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("context"), m_Context));
        
    }
    if(m_Context_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("context_id"), m_Context_id));
    }
    if(m_Created_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_date"), m_Created_date));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    }
    if(m_SummaryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("summary"), m_Summary));
        
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

void CommentResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setContent(ModelBase::stringFromHttpContent(multipart->getContent(U("content"))));
    if(multipart->hasContent(U("context")))
    {
        setContext(ModelBase::stringFromHttpContent(multipart->getContent(U("context"))));
        
    }
    if(multipart->hasContent(U("context_id")))
    {
        setContextId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("context_id"))));
    }
    if(multipart->hasContent(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created_date"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("id"))));
    }
    if(multipart->hasContent(U("summary")))
    {
        setSummary(ModelBase::stringFromHttpContent(multipart->getContent(U("summary"))));
        
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


utility::string_t CommentResource::getContent() const
{
    return m_Content;
}
void CommentResource::setContent(utility::string_t value)
{
    m_Content = value;
    
}
utility::string_t CommentResource::getContext() const
{
    return m_Context;
}
void CommentResource::setContext(utility::string_t value)
{
    m_Context = value;
    m_ContextIsSet = true;
}
bool CommentResource::contextIsSet() const
{
    return m_ContextIsSet;
}
void CommentResource::unsetContext()
{
    m_ContextIsSet = false;
}
int32_t CommentResource::getContextId() const
{
    return m_Context_id;
}
void CommentResource::setContextId(int32_t value)
{
    m_Context_id = value;
    m_Context_idIsSet = true;
}
bool CommentResource::context_idIsSet() const
{
    return m_Context_idIsSet;
}
void CommentResource::unsetContext_id()
{
    m_Context_idIsSet = false;
}
int64_t CommentResource::getCreatedDate() const
{
    return m_Created_date;
}
void CommentResource::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool CommentResource::created_dateIsSet() const
{
    return m_Created_dateIsSet;
}
void CommentResource::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}
int64_t CommentResource::getId() const
{
    return m_Id;
}
void CommentResource::setId(int64_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool CommentResource::idIsSet() const
{
    return m_IdIsSet;
}
void CommentResource::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t CommentResource::getSummary() const
{
    return m_Summary;
}
void CommentResource::setSummary(utility::string_t value)
{
    m_Summary = value;
    m_SummaryIsSet = true;
}
bool CommentResource::summaryIsSet() const
{
    return m_SummaryIsSet;
}
void CommentResource::unsetSummary()
{
    m_SummaryIsSet = false;
}
int64_t CommentResource::getUpdatedDate() const
{
    return m_Updated_date;
}
void CommentResource::setUpdatedDate(int64_t value)
{
    m_Updated_date = value;
    m_Updated_dateIsSet = true;
}
bool CommentResource::updated_dateIsSet() const
{
    return m_Updated_dateIsSet;
}
void CommentResource::unsetUpdated_date()
{
    m_Updated_dateIsSet = false;
}
std::shared_ptr<SimpleUserResource> CommentResource::getUser() const
{
    return m_User;
}
void CommentResource::setUser(std::shared_ptr<SimpleUserResource> value)
{
    m_User = value;
    m_UserIsSet = true;
}
bool CommentResource::userIsSet() const
{
    return m_UserIsSet;
}
void CommentResource::unsetUser()
{
    m_UserIsSet = false;
}

}
}
}
}

