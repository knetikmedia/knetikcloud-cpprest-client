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
 * AchievementDefinitionResource.h
 *
 * 
 */

#ifndef AchievementDefinitionResource_H_
#define AchievementDefinitionResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <map>
#include <vector>
#include "Property.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  AchievementDefinitionResource
    : public ModelBase
{
public:
    AchievementDefinitionResource();
    virtual ~AchievementDefinitionResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AchievementDefinitionResource members

    /// <summary>
    /// A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this resource type
    /// </summary>
    std::map<utility::string_t, std::shared_ptr<Property>>& getAdditionalProperties();
    bool additional_propertiesIsSet() const;
    void unsetAdditional_properties();
    /// <summary>
    /// The date/time this resource was created in seconds since unix epoch
    /// </summary>
    int64_t getCreatedDate() const;
    void setCreatedDate(int64_t value);
    bool created_dateIsSet() const;
    void unsetCreated_date();
    /// <summary>
    /// The description of the achievement. Must be at least 2 characters in length.
    /// </summary>
    utility::string_t getDescription() const;
    void setDescription(utility::string_t value);
    bool descriptionIsSet() const;
    void unsetDescription();
    /// <summary>
    /// Whether the achievement is hidden from the user
    /// </summary>
    bool getHidden() const;
    void setHidden(bool value);
        /// <summary>
    /// The name of the achievement. Must be at least 6 characters in length. IMMUTABLE
    /// </summary>
    utility::string_t getName() const;
    void setName(utility::string_t value);
        /// <summary>
    /// The required progress for the achievement definition
    /// </summary>
    int32_t getRequiredProgress() const;
    void setRequiredProgress(int32_t value);
        /// <summary>
    /// The id of the rule generated for this achievement
    /// </summary>
    utility::string_t getRuleId() const;
    void setRuleId(utility::string_t value);
    bool rule_idIsSet() const;
    void unsetRule_id();
    /// <summary>
    /// The tags for the achievement definition
    /// </summary>
    std::vector<utility::string_t>& getTags();
    bool tagsIsSet() const;
    void unsetTags();
    /// <summary>
    /// An achievement template this achievement is validated against (private). May be null and no validation of additional_properties will be done
    /// </summary>
    utility::string_t getTemplate() const;
    void setTemplate(utility::string_t value);
    bool templateIsSet() const;
    void unsetTemplate();
    /// <summary>
    /// The name of the trigger event associated with this achievement
    /// </summary>
    utility::string_t getTriggerEventName() const;
    void setTriggerEventName(utility::string_t value);
    bool trigger_event_nameIsSet() const;
    void unsetTrigger_event_name();
    /// <summary>
    /// The date/time this resource was last updated in seconds since unix epoch
    /// </summary>
    int64_t getUpdatedDate() const;
    void setUpdatedDate(int64_t value);
    bool updated_dateIsSet() const;
    void unsetUpdated_date();

protected:
    std::map<utility::string_t, std::shared_ptr<Property>> m_Additional_properties;
    bool m_Additional_propertiesIsSet;
int64_t m_Created_date;
    bool m_Created_dateIsSet;
utility::string_t m_Description;
    bool m_DescriptionIsSet;
bool m_Hidden;
    utility::string_t m_Name;
    int32_t m_Required_progress;
    utility::string_t m_Rule_id;
    bool m_Rule_idIsSet;
std::vector<utility::string_t> m_Tags;
    bool m_TagsIsSet;
utility::string_t m_Template;
    bool m_TemplateIsSet;
utility::string_t m_Trigger_event_name;
    bool m_Trigger_event_nameIsSet;
int64_t m_Updated_date;
    bool m_Updated_dateIsSet;
};

}
}
}
}

#endif /* AchievementDefinitionResource_H_ */
