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



#include "WebsocketUnsubscribeEvent.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

WebsocketUnsubscribeEvent::WebsocketUnsubscribeEvent()
{
    m_TopicIsSet = false;
    m_Topic_subscriberIsSet = false;
}

WebsocketUnsubscribeEvent::~WebsocketUnsubscribeEvent()
{
}

void WebsocketUnsubscribeEvent::validate()
{
    // TODO: implement validation
}

web::json::value WebsocketUnsubscribeEvent::toJson() const
{
    web::json::value val = this->BroadcastableEvent::toJson();

    if(m_TopicIsSet)
    {
        val[U("topic")] = ModelBase::toJson(m_Topic);
    }
    if(m_Topic_subscriberIsSet)
    {
        val[U("topic_subscriber")] = ModelBase::toJson(m_Topic_subscriber);
    }

    return val;
}

void WebsocketUnsubscribeEvent::fromJson(web::json::value& val)
{
    this->BroadcastableEvent::fromJson(val);

    if(val.has_field(U("topic")))
    {
        if(!val[U("topic")].is_null())
        {
            std::shared_ptr<Topic> newItem(new Topic());
            newItem->fromJson(val[U("topic")]);
            setTopic( newItem );
        }
    }
    if(val.has_field(U("topic_subscriber")))
    {
        if(!val[U("topic_subscriber")].is_null())
        {
            std::shared_ptr<TopicSubscriber> newItem(new TopicSubscriber());
            newItem->fromJson(val[U("topic_subscriber")]);
            setTopicSubscriber( newItem );
        }
    }
}

void WebsocketUnsubscribeEvent::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_ClientIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("client"), m_Client));
        
    }
    if(m_CustomerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("customer"), m_Customer));
        
    }
    if(m_Do_not_broadcastIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("do_not_broadcast"), m_Do_not_broadcast));
    }
    if(m_SectionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("section"), m_Section));
        
    }
    if(m_SourceIsSet)
    {
        if (m_Source.get())
        {
            m_Source->toMultipart(multipart, U("source."));
        }
        
    }
    if(m_SpecificsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("specifics"), m_Specifics));
        
    }
    if(m_SynchronousIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("synchronous"), m_Synchronous));
    }
    if(m_TimestampIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("timestamp"), m_Timestamp));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
    if(m_TopicIsSet)
    {
        if (m_Topic.get())
        {
            m_Topic->toMultipart(multipart, U("topic."));
        }
        
    }
    if(m_Topic_subscriberIsSet)
    {
        if (m_Topic_subscriber.get())
        {
            m_Topic_subscriber->toMultipart(multipart, U("topic_subscriber."));
        }
        
    }
}

void WebsocketUnsubscribeEvent::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("client")))
    {
        setClient(ModelBase::stringFromHttpContent(multipart->getContent(U("client"))));
    }
    if(multipart->hasContent(U("customer")))
    {
        setCustomer(ModelBase::stringFromHttpContent(multipart->getContent(U("customer"))));
    }
    if(multipart->hasContent(U("do_not_broadcast")))
    {
        setDoNotBroadcast(ModelBase::boolFromHttpContent(multipart->getContent(U("do_not_broadcast"))));
    }
    if(multipart->hasContent(U("section")))
    {
        setSection(ModelBase::stringFromHttpContent(multipart->getContent(U("section"))));
    }
    if(multipart->hasContent(U("source")))
    {
        if(multipart->hasContent(U("source")))
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromMultiPart(multipart, U("source."));
            setSource( newItem );
        }
    }
    if(multipart->hasContent(U("specifics")))
    {
        setSpecifics(ModelBase::stringFromHttpContent(multipart->getContent(U("specifics"))));
    }
    if(multipart->hasContent(U("synchronous")))
    {
        setSynchronous(ModelBase::boolFromHttpContent(multipart->getContent(U("synchronous"))));
    }
    if(multipart->hasContent(U("timestamp")))
    {
        setTimestamp(ModelBase::int64_tFromHttpContent(multipart->getContent(U("timestamp"))));
    }
    setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    if(multipart->hasContent(U("topic")))
    {
        if(multipart->hasContent(U("topic")))
        {
            std::shared_ptr<Topic> newItem(new Topic());
            newItem->fromMultiPart(multipart, U("topic."));
            setTopic( newItem );
        }
    }
    if(multipart->hasContent(U("topic_subscriber")))
    {
        if(multipart->hasContent(U("topic_subscriber")))
        {
            std::shared_ptr<TopicSubscriber> newItem(new TopicSubscriber());
            newItem->fromMultiPart(multipart, U("topic_subscriber."));
            setTopicSubscriber( newItem );
        }
    }
}

std::shared_ptr<Topic> WebsocketUnsubscribeEvent::getTopic() const
{
    return m_Topic;
}


void WebsocketUnsubscribeEvent::setTopic(std::shared_ptr<Topic> value)
{
    m_Topic = value;
    m_TopicIsSet = true;
}
bool WebsocketUnsubscribeEvent::topicIsSet() const
{
    return m_TopicIsSet;
}

void WebsocketUnsubscribeEvent::unsetTopic()
{
    m_TopicIsSet = false;
}

std::shared_ptr<TopicSubscriber> WebsocketUnsubscribeEvent::getTopicSubscriber() const
{
    return m_Topic_subscriber;
}


void WebsocketUnsubscribeEvent::setTopicSubscriber(std::shared_ptr<TopicSubscriber> value)
{
    m_Topic_subscriber = value;
    m_Topic_subscriberIsSet = true;
}
bool WebsocketUnsubscribeEvent::topicSubscriberIsSet() const
{
    return m_Topic_subscriberIsSet;
}

void WebsocketUnsubscribeEvent::unsetTopic_subscriber()
{
    m_Topic_subscriberIsSet = false;
}

}
}
}
}
