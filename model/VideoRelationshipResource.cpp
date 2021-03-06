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



#include "VideoRelationshipResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

VideoRelationshipResource::VideoRelationshipResource()
{
    m_FromIsSet = false;
    m_Id = 0L;
    m_IdIsSet = false;
    m_Relationship_details = U("");
}

VideoRelationshipResource::~VideoRelationshipResource()
{
}

void VideoRelationshipResource::validate()
{
    // TODO: implement validation
}

web::json::value VideoRelationshipResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_FromIsSet)
    {
        val[U("from")] = ModelBase::toJson(m_From);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    val[U("relationship_details")] = ModelBase::toJson(m_Relationship_details);
    val[U("to")] = ModelBase::toJson(m_To);

    return val;
}

void VideoRelationshipResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("from")))
    {
        if(!val[U("from")].is_null())
        {
            std::shared_ptr<SimpleReferenceResource«long»> newItem(new SimpleReferenceResource«long»());
            newItem->fromJson(val[U("from")]);
            setFrom( newItem );
        }
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::int64_tFromJson(val[U("id")]));
    }
    setRelationshipDetails(ModelBase::stringFromJson(val[U("relationship_details")]));
    std::shared_ptr<SimpleReferenceResource«long»> newTo(new SimpleReferenceResource«long»());
    newTo->fromJson(val[U("to")]);
    setTo( newTo );
}

void VideoRelationshipResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_FromIsSet)
    {
        if (m_From.get())
        {
            m_From->toMultipart(multipart, U("from."));
        }
        
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("relationship_details"), m_Relationship_details));
    m_To->toMultipart(multipart, U("to."));
}

void VideoRelationshipResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("from")))
    {
        if(multipart->hasContent(U("from")))
        {
            std::shared_ptr<SimpleReferenceResource«long»> newItem(new SimpleReferenceResource«long»());
            newItem->fromMultiPart(multipart, U("from."));
            setFrom( newItem );
        }
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("id"))));
    }
    setRelationshipDetails(ModelBase::stringFromHttpContent(multipart->getContent(U("relationship_details"))));
    std::shared_ptr<SimpleReferenceResource«long»> newTo(new SimpleReferenceResource«long»());
    newTo->fromMultiPart(multipart, U("to."));
    setTo( newTo );
}

std::shared_ptr<SimpleReferenceResource«long»> VideoRelationshipResource::getFrom() const
{
    return m_From;
}


void VideoRelationshipResource::setFrom(std::shared_ptr<SimpleReferenceResource«long»> value)
{
    m_From = value;
    m_FromIsSet = true;
}
bool VideoRelationshipResource::fromIsSet() const
{
    return m_FromIsSet;
}

void VideoRelationshipResource::unsetFrom()
{
    m_FromIsSet = false;
}

int64_t VideoRelationshipResource::getId() const
{
    return m_Id;
}


void VideoRelationshipResource::setId(int64_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool VideoRelationshipResource::idIsSet() const
{
    return m_IdIsSet;
}

void VideoRelationshipResource::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t VideoRelationshipResource::getRelationshipDetails() const
{
    return m_Relationship_details;
}


void VideoRelationshipResource::setRelationshipDetails(utility::string_t value)
{
    m_Relationship_details = value;
    
}
std::shared_ptr<SimpleReferenceResource«long»> VideoRelationshipResource::getTo() const
{
    return m_To;
}


void VideoRelationshipResource::setTo(std::shared_ptr<SimpleReferenceResource«long»> value)
{
    m_To = value;
    
}
}
}
}
}

