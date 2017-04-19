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



#include "CommentSearch.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

CommentSearch::CommentSearch()
{
    m_Content = U("");
    m_ContentIsSet = false;
    m_Context = U("");
    m_ContextIsSet = false;
    m_Context_id = 0;
    m_Context_idIsSet = false;
    m_Id = 0;
    m_IdIsSet = false;
    m_Owner_id = 0;
    m_Owner_idIsSet = false;
    m_Owner_username = U("");
    m_Owner_usernameIsSet = false;
    
}

CommentSearch::~CommentSearch()
{
}

void CommentSearch::validate()
{
    // TODO: implement validation
}

web::json::value CommentSearch::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ContentIsSet)
    {
        val[U("content")] = ModelBase::toJson(m_Content);
    }
    if(m_ContextIsSet)
    {
        val[U("context")] = ModelBase::toJson(m_Context);
    }
    if(m_Context_idIsSet)
    {
        val[U("context_id")] = ModelBase::toJson(m_Context_id);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_Owner_idIsSet)
    {
        val[U("owner_id")] = ModelBase::toJson(m_Owner_id);
    }
    if(m_Owner_usernameIsSet)
    {
        val[U("owner_username")] = ModelBase::toJson(m_Owner_username);
    }
    

    return val;
}

void CommentSearch::fromJson(web::json::value& val)
{
    if(val.has_field(U("content")))
    {
        setContent(ModelBase::stringFromJson(val[U("content")]));
        
    }
    if(val.has_field(U("context")))
    {
        setContext(ModelBase::stringFromJson(val[U("context")]));
        
    }
    if(val.has_field(U("context_id")))
    {
        setContextId(ModelBase::int32_tFromJson(val[U("context_id")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::int64_tFromJson(val[U("id")]));
    }
    if(val.has_field(U("owner_id")))
    {
        setOwnerId(ModelBase::int32_tFromJson(val[U("owner_id")]));
    }
    if(val.has_field(U("owner_username")))
    {
        setOwnerUsername(ModelBase::stringFromJson(val[U("owner_username")]));
        
    }
    
}

void CommentSearch::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_ContentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("content"), m_Content));
        
    }
    if(m_ContextIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("context"), m_Context));
        
    }
    if(m_Context_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("context_id"), m_Context_id));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    }
    if(m_Owner_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("owner_id"), m_Owner_id));
    }
    if(m_Owner_usernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("owner_username"), m_Owner_username));
        
    }
    
}

void CommentSearch::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("content")))
    {
        setContent(ModelBase::stringFromHttpContent(multipart->getContent(U("content"))));
        
    }
    if(multipart->hasContent(U("context")))
    {
        setContext(ModelBase::stringFromHttpContent(multipart->getContent(U("context"))));
        
    }
    if(multipart->hasContent(U("context_id")))
    {
        setContextId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("context_id"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("id"))));
    }
    if(multipart->hasContent(U("owner_id")))
    {
        setOwnerId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("owner_id"))));
    }
    if(multipart->hasContent(U("owner_username")))
    {
        setOwnerUsername(ModelBase::stringFromHttpContent(multipart->getContent(U("owner_username"))));
        
    }
    
}


utility::string_t CommentSearch::getContent() const
{
    return m_Content;
}
void CommentSearch::setContent(utility::string_t value)
{
    m_Content = value;
    m_ContentIsSet = true;
}
bool CommentSearch::contentIsSet() const
{
    return m_ContentIsSet;
}
void CommentSearch::unsetContent()
{
    m_ContentIsSet = false;
}
utility::string_t CommentSearch::getContext() const
{
    return m_Context;
}
void CommentSearch::setContext(utility::string_t value)
{
    m_Context = value;
    m_ContextIsSet = true;
}
bool CommentSearch::contextIsSet() const
{
    return m_ContextIsSet;
}
void CommentSearch::unsetContext()
{
    m_ContextIsSet = false;
}
int32_t CommentSearch::getContextId() const
{
    return m_Context_id;
}
void CommentSearch::setContextId(int32_t value)
{
    m_Context_id = value;
    m_Context_idIsSet = true;
}
bool CommentSearch::context_idIsSet() const
{
    return m_Context_idIsSet;
}
void CommentSearch::unsetContext_id()
{
    m_Context_idIsSet = false;
}
int64_t CommentSearch::getId() const
{
    return m_Id;
}
void CommentSearch::setId(int64_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool CommentSearch::idIsSet() const
{
    return m_IdIsSet;
}
void CommentSearch::unsetId()
{
    m_IdIsSet = false;
}
int32_t CommentSearch::getOwnerId() const
{
    return m_Owner_id;
}
void CommentSearch::setOwnerId(int32_t value)
{
    m_Owner_id = value;
    m_Owner_idIsSet = true;
}
bool CommentSearch::owner_idIsSet() const
{
    return m_Owner_idIsSet;
}
void CommentSearch::unsetOwner_id()
{
    m_Owner_idIsSet = false;
}
utility::string_t CommentSearch::getOwnerUsername() const
{
    return m_Owner_username;
}
void CommentSearch::setOwnerUsername(utility::string_t value)
{
    m_Owner_username = value;
    m_Owner_usernameIsSet = true;
}
bool CommentSearch::owner_usernameIsSet() const
{
    return m_Owner_usernameIsSet;
}
void CommentSearch::unsetOwner_username()
{
    m_Owner_usernameIsSet = false;
}

}
}
}
}

