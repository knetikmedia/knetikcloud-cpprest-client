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
 * MessageTemplateResource.h
 *
 * 
 */

#ifndef MessageTemplateResource_H_
#define MessageTemplateResource_H_


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
class  MessageTemplateResource
    : public ModelBase
{
public:
    MessageTemplateResource();
    virtual ~MessageTemplateResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MessageTemplateResource members

    /// <summary>
    /// The content of the template. See Apache Velocity documentation for formatting
    /// </summary>
    utility::string_t getContent() const;
        void setContent(utility::string_t value);
    /// <summary>
    /// The id of the template. Cannot be changed after creation. default: auto generated
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(utility::string_t value);
    /// <summary>
    /// The name of the template
    /// </summary>
    utility::string_t getName() const;
        void setName(utility::string_t value);
    /// <summary>
    /// A list of tags for search purposes. Will be converted to lower case
    /// </summary>
    std::vector<utility::string_t>& getTags();
    bool tagsIsSet() const;
    void unsetTags();
    void setTags(std::vector<utility::string_t> value);

protected:
    utility::string_t m_Content;
        utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Name;
        std::vector<utility::string_t> m_Tags;
    bool m_TagsIsSet;
};

}
}
}
}

#endif /* MessageTemplateResource_H_ */
