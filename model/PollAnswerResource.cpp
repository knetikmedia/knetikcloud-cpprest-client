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



#include "PollAnswerResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

PollAnswerResource::PollAnswerResource()
{
    m_Count = 0;
    m_CountIsSet = false;
    m_Key = U("");
    m_Text = U("");
}

PollAnswerResource::~PollAnswerResource()
{
}

void PollAnswerResource::validate()
{
    // TODO: implement validation
}

web::json::value PollAnswerResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_CountIsSet)
    {
        val[U("count")] = ModelBase::toJson(m_Count);
    }
    val[U("key")] = ModelBase::toJson(m_Key);
    val[U("text")] = ModelBase::toJson(m_Text);

    return val;
}

void PollAnswerResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("count")))
    {
        setCount(ModelBase::int32_tFromJson(val[U("count")]));
    }
    setKey(ModelBase::stringFromJson(val[U("key")]));
    setText(ModelBase::stringFromJson(val[U("text")]));
}

void PollAnswerResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    multipart->add(ModelBase::toHttpContent(namePrefix + U("key"), m_Key));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("text"), m_Text));
}

void PollAnswerResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("count")))
    {
        setCount(ModelBase::int32_tFromHttpContent(multipart->getContent(U("count"))));
    }
    setKey(ModelBase::stringFromHttpContent(multipart->getContent(U("key"))));
    setText(ModelBase::stringFromHttpContent(multipart->getContent(U("text"))));
}

int32_t PollAnswerResource::getCount() const
{
    return m_Count;
}


void PollAnswerResource::setCount(int32_t value)
{
    m_Count = value;
    m_CountIsSet = true;
}
bool PollAnswerResource::countIsSet() const
{
    return m_CountIsSet;
}

void PollAnswerResource::unsetCount()
{
    m_CountIsSet = false;
}

utility::string_t PollAnswerResource::getKey() const
{
    return m_Key;
}


void PollAnswerResource::setKey(utility::string_t value)
{
    m_Key = value;
    
}
utility::string_t PollAnswerResource::getText() const
{
    return m_Text;
}


void PollAnswerResource::setText(utility::string_t value)
{
    m_Text = value;
    
}
}
}
}
}

