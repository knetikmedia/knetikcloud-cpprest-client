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

/*
 * RawEmailResource.h
 *
 * 
 */

#ifndef RawEmailResource_H_
#define RawEmailResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  RawEmailResource
    : public ModelBase
{
public:
    RawEmailResource();
    virtual ~RawEmailResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// RawEmailResource members

    /// <summary>
    /// The body of the outgoing message.
    /// </summary>
    utility::string_t getBody() const;
    void setBody(utility::string_t value);
        /// <summary>
    /// Address to attribute the outgoing message to. Optional if the config email.out_address is set.
    /// </summary>
    utility::string_t getFrom() const;
    void setFrom(utility::string_t value);
    bool fromIsSet() const;
    void unsetFrom();
    /// <summary>
    /// Whether the body is to be treated as html. Default false.
    /// </summary>
    bool getHtml() const;
    void setHtml(bool value);
    bool htmlIsSet() const;
    void unsetHtml();
    /// <summary>
    /// A list of user ids to send the message to.
    /// </summary>
    std::vector<int32_t>& getRecipients();
        /// <summary>
    /// The subject of the outgoing message.
    /// </summary>
    utility::string_t getSubject() const;
    void setSubject(utility::string_t value);
    
protected:
    utility::string_t m_Body;
    utility::string_t m_From;
    bool m_FromIsSet;
bool m_Html;
    bool m_HtmlIsSet;
std::vector<int32_t> m_Recipients;
    utility::string_t m_Subject;
    };

}
}
}
}

#endif /* RawEmailResource_H_ */
