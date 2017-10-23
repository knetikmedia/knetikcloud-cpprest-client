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
 * TemplateSMSResource.h
 *
 * 
 */

#ifndef TemplateSMSResource_H_
#define TemplateSMSResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Object.h"
#include <vector>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  TemplateSMSResource
    : public ModelBase
{
public:
    TemplateSMSResource();
    virtual ~TemplateSMSResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TemplateSMSResource members

    /// <summary>
    /// The phone number to attribute the outgoing message to. Optional if the config text.out_number is set.
    /// </summary>
    utility::string_t getFrom() const;
    bool fromIsSet() const;
    void unsetFrom();
    void setFrom(utility::string_t value);
    /// <summary>
    /// A list of user ids to send the message to.
    /// </summary>
    std::vector<int32_t>& getRecipients();
        void setRecipients(std::vector<int32_t> value);
    /// <summary>
    /// A mustache template
    /// </summary>
    utility::string_t getTemplate() const;
        void setTemplate(utility::string_t value);
    /// <summary>
    /// A map of values to fill in the template
    /// </summary>
    std::shared_ptr<Object> getTemplateVars() const;
    bool templateVarsIsSet() const;
    void unsetTemplate_vars();
    void setTemplateVars(std::shared_ptr<Object> value);

protected:
    utility::string_t m_From;
    bool m_FromIsSet;
    std::vector<int32_t> m_Recipients;
        utility::string_t m_Template;
        std::shared_ptr<Object> m_Template_vars;
    bool m_Template_varsIsSet;
};

}
}
}
}

#endif /* TemplateSMSResource_H_ */
