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



#include "PollResponseResource.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

PollResponseResource::PollResponseResource()
{
    m_Answer = U("");
    m_Answered_date = 0;
    m_Answered_dateIsSet = false;
    m_Id = U("");
    m_IdIsSet = false;
    m_Poll_id = U("");
    
}

PollResponseResource::~PollResponseResource()
{
}

void PollResponseResource::validate()
{
    // TODO: implement validation
}

web::json::value PollResponseResource::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("answer")] = ModelBase::toJson(m_Answer);
    if(m_Answered_dateIsSet)
    {
        val[U("answered_date")] = ModelBase::toJson(m_Answered_date);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    val[U("poll_id")] = ModelBase::toJson(m_Poll_id);
    val[U("user")] = ModelBase::toJson(m_User);
    

    return val;
}

void PollResponseResource::fromJson(web::json::value& val)
{
    setAnswer(ModelBase::stringFromJson(val[U("answer")]));
    if(val.has_field(U("answered_date")))
    {
        setAnsweredDate(ModelBase::int64_tFromJson(val[U("answered_date")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
        
    }
    setPollId(ModelBase::stringFromJson(val[U("poll_id")]));
    std::shared_ptr<SimpleUserResource> newUser(new SimpleUserResource());
    newUser->fromJson(val[U("user")]);
    setUser( newItem );
    
}

void PollResponseResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("answer"), m_Answer));
    if(m_Answered_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("answered_date"), m_Answered_date));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("poll_id"), m_Poll_id));
    m_User->toMultipart(multipart, U("user."));
    
}

void PollResponseResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setAnswer(ModelBase::stringFromHttpContent(multipart->getContent(U("answer"))));
    if(multipart->hasContent(U("answered_date")))
    {
        setAnsweredDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("answered_date"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
        
    }
    setPollId(ModelBase::stringFromHttpContent(multipart->getContent(U("poll_id"))));
    std::shared_ptr<SimpleUserResource> newUser(new SimpleUserResource());
    newUser->fromMultiPart(multipart, U("user."));
    setUser( newUser );
    
}


utility::string_t PollResponseResource::getAnswer() const
{
    return m_Answer;
}
void PollResponseResource::setAnswer(utility::string_t value)
{
    m_Answer = value;
    
}
int64_t PollResponseResource::getAnsweredDate() const
{
    return m_Answered_date;
}
void PollResponseResource::setAnsweredDate(int64_t value)
{
    m_Answered_date = value;
    m_Answered_dateIsSet = true;
}
bool PollResponseResource::answered_dateIsSet() const
{
    return m_Answered_dateIsSet;
}
void PollResponseResource::unsetAnswered_date()
{
    m_Answered_dateIsSet = false;
}
utility::string_t PollResponseResource::getId() const
{
    return m_Id;
}
void PollResponseResource::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool PollResponseResource::idIsSet() const
{
    return m_IdIsSet;
}
void PollResponseResource::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t PollResponseResource::getPollId() const
{
    return m_Poll_id;
}
void PollResponseResource::setPollId(utility::string_t value)
{
    m_Poll_id = value;
    
}
std::shared_ptr<SimpleUserResource> PollResponseResource::getUser() const
{
    return m_User;
}
void PollResponseResource::setUser(std::shared_ptr<SimpleUserResource> value)
{
    m_User = value;
    
}

}
}
}
}

