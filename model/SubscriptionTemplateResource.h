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
 * SubscriptionTemplateResource.h
 *
 * 
 */

#ifndef SubscriptionTemplateResource_H_
#define SubscriptionTemplateResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "PropertyDefinitionResource.h"
#include <vector>
#include "TemplateResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  SubscriptionTemplateResource
    : public ModelBase
{
public:
    SubscriptionTemplateResource();
    virtual ~SubscriptionTemplateResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SubscriptionTemplateResource members

    /// <summary>
    /// The date/time this resource was created in seconds since unix epoch
    /// </summary>
    int64_t getCreatedDate() const;
    void setCreatedDate(int64_t value);
    bool created_dateIsSet() const;
    void unsetCreated_date();
    /// <summary>
    /// The id of the template
    /// </summary>
    utility::string_t getId() const;
    void setId(utility::string_t value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// The name of the template
    /// </summary>
    utility::string_t getName() const;
    void setName(utility::string_t value);
        /// <summary>
    /// A template to apply to all plans on a subscription using this template
    /// </summary>
    std::shared_ptr<TemplateResource> getPlanTemplate() const;
    void setPlanTemplate(std::shared_ptr<TemplateResource> value);
    bool plan_templateIsSet() const;
    void unsetPlan_template();
    /// <summary>
    /// The customized properties that are present
    /// </summary>
    std::vector<std::shared_ptr<PropertyDefinitionResource>>& getProperties();
    bool propertiesIsSet() const;
    void unsetProperties();
    /// <summary>
    /// The date/time this resource was last updated in seconds since unix epoch
    /// </summary>
    int64_t getUpdatedDate() const;
    void setUpdatedDate(int64_t value);
    bool updated_dateIsSet() const;
    void unsetUpdated_date();

protected:
    int64_t m_Created_date;
    bool m_Created_dateIsSet;
utility::string_t m_Id;
    bool m_IdIsSet;
utility::string_t m_Name;
    std::shared_ptr<TemplateResource> m_Plan_template;
    bool m_Plan_templateIsSet;
std::vector<std::shared_ptr<PropertyDefinitionResource>> m_Properties;
    bool m_PropertiesIsSet;
int64_t m_Updated_date;
    bool m_Updated_dateIsSet;
};

}
}
}
}

#endif /* SubscriptionTemplateResource_H_ */
