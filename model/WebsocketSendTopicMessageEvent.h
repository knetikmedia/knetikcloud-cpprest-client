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

/*
 * WebsocketSendTopicMessageEvent.h
 *
 * 
 */

#ifndef WebsocketSendTopicMessageEvent_H_
#define WebsocketSendTopicMessageEvent_H_


#include "BroadcastableEvent.h"
#include <cpprest/details/basic_types.h>
#include "Object.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  WebsocketSendTopicMessageEvent
    : public BroadcastableEvent
{
public:
    WebsocketSendTopicMessageEvent();
    virtual ~WebsocketSendTopicMessageEvent();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// WebsocketSendTopicMessageEvent members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Object> getContent() const;
    bool contentIsSet() const;
    void unsetContent();
    void setContent(std::shared_ptr<Object> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTopic() const;
    bool topicIsSet() const;
    void unsetTopic();
    void setTopic(utility::string_t value);

protected:
    std::shared_ptr<Object> m_Content;
    bool m_ContentIsSet;
    utility::string_t m_Topic;
    bool m_TopicIsSet;
};

}
}
}
}

#endif /* WebsocketSendTopicMessageEvent_H_ */