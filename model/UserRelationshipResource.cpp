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



#include "UserRelationshipResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

UserRelationshipResource::UserRelationshipResource()
{
    m_Context = U("");
    m_ContextIsSet = false;
    m_Id = 0L;
    m_IdIsSet = false;
}

UserRelationshipResource::~UserRelationshipResource()
{
}

void UserRelationshipResource::validate()
{
    // TODO: implement validation
}

web::json::value UserRelationshipResource::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("child")] = ModelBase::toJson(m_Child);
    if(m_ContextIsSet)
    {
        val[U("context")] = ModelBase::toJson(m_Context);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    val[U("parent")] = ModelBase::toJson(m_Parent);

    return val;
}

void UserRelationshipResource::fromJson(web::json::value& val)
{
    std::shared_ptr<SimpleUserResource> newChild(new SimpleUserResource());
    newChild->fromJson(val[U("child")]);
    setChild( newChild );
    if(val.has_field(U("context")))
    {
        setContext(ModelBase::stringFromJson(val[U("context")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::int64_tFromJson(val[U("id")]));
    }
    std::shared_ptr<SimpleUserResource> newParent(new SimpleUserResource());
    newParent->fromJson(val[U("parent")]);
    setParent( newParent );
}

void UserRelationshipResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    m_Child->toMultipart(multipart, U("child."));
    if(m_ContextIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("context"), m_Context));
        
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    }
    m_Parent->toMultipart(multipart, U("parent."));
}

void UserRelationshipResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    std::shared_ptr<SimpleUserResource> newChild(new SimpleUserResource());
    newChild->fromMultiPart(multipart, U("child."));
    setChild( newChild );
    if(multipart->hasContent(U("context")))
    {
        setContext(ModelBase::stringFromHttpContent(multipart->getContent(U("context"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("id"))));
    }
    std::shared_ptr<SimpleUserResource> newParent(new SimpleUserResource());
    newParent->fromMultiPart(multipart, U("parent."));
    setParent( newParent );
}

std::shared_ptr<SimpleUserResource> UserRelationshipResource::getChild() const
{
    return m_Child;
}


void UserRelationshipResource::setChild(std::shared_ptr<SimpleUserResource> value)
{
    m_Child = value;
    
}
utility::string_t UserRelationshipResource::getContext() const
{
    return m_Context;
}


void UserRelationshipResource::setContext(utility::string_t value)
{
    m_Context = value;
    m_ContextIsSet = true;
}
bool UserRelationshipResource::contextIsSet() const
{
    return m_ContextIsSet;
}

void UserRelationshipResource::unsetContext()
{
    m_ContextIsSet = false;
}

int64_t UserRelationshipResource::getId() const
{
    return m_Id;
}


void UserRelationshipResource::setId(int64_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool UserRelationshipResource::idIsSet() const
{
    return m_IdIsSet;
}

void UserRelationshipResource::unsetId()
{
    m_IdIsSet = false;
}

std::shared_ptr<SimpleUserResource> UserRelationshipResource::getParent() const
{
    return m_Parent;
}


void UserRelationshipResource::setParent(std::shared_ptr<SimpleUserResource> value)
{
    m_Parent = value;
    
}
}
}
}
}

