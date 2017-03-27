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
 * GroupResource.h
 *
 * 
 */

#ifndef GroupResource_H_
#define GroupResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <map>
#include <vector>
#include "Property.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  GroupResource
    : public ModelBase
{
public:
    GroupResource();
    virtual ~GroupResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GroupResource members

    /// <summary>
    /// A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
    /// </summary>
    std::map<utility::string_t, std::shared_ptr<Property>>& getAdditionalProperties();
    bool additional_propertiesIsSet() const;
    void unsetAdditional_properties();
    /// <summary>
    /// A description of the group. Max 250 characters
    /// </summary>
    utility::string_t getDescription() const;
    void setDescription(utility::string_t value);
    bool descriptionIsSet() const;
    void unsetDescription();
    /// <summary>
    /// The number of users in the group
    /// </summary>
    int32_t getMemberCount() const;
    void setMemberCount(int32_t value);
    bool member_countIsSet() const;
    void unsetMember_count();
    /// <summary>
    /// A message of the day for members of the group
    /// </summary>
    utility::string_t getMessageOfTheDay() const;
    void setMessageOfTheDay(utility::string_t value);
    bool message_of_the_dayIsSet() const;
    void unsetMessage_of_the_day();
    /// <summary>
    /// The name of the group. Max 50 characters
    /// </summary>
    utility::string_t getName() const;
    void setName(utility::string_t value);
        /// <summary>
    /// The unique name of another group that this group is a subset of
    /// </summary>
    utility::string_t getParent() const;
    void setParent(utility::string_t value);
    bool parentIsSet() const;
    void unsetParent();
    /// <summary>
    /// The status which describes whether other users can freely join the group or not
    /// </summary>
    utility::string_t getStatus() const;
    void setStatus(utility::string_t value);
        /// <summary>
    /// The number of users in child groups
    /// </summary>
    int32_t getSubMemberCount() const;
    void setSubMemberCount(int32_t value);
    bool sub_member_countIsSet() const;
    void unsetSub_member_count();
    /// <summary>
    /// A group template this group is validated against. May be null and no validation of additional_properties will be done
    /// </summary>
    utility::string_t getTemplate() const;
    void setTemplate(utility::string_t value);
    bool templateIsSet() const;
    void unsetTemplate();
    /// <summary>
    /// Unique name used in url and references. Uppercase, lowercase, numbers and hyphens only. Max 50 characters. Cannot be altered once created
    /// </summary>
    utility::string_t getUniqueName() const;
    void setUniqueName(utility::string_t value);
    
protected:
    std::map<utility::string_t, std::shared_ptr<Property>> m_Additional_properties;
    bool m_Additional_propertiesIsSet;
utility::string_t m_Description;
    bool m_DescriptionIsSet;
int32_t m_Member_count;
    bool m_Member_countIsSet;
utility::string_t m_Message_of_the_day;
    bool m_Message_of_the_dayIsSet;
utility::string_t m_Name;
    utility::string_t m_Parent;
    bool m_ParentIsSet;
utility::string_t m_Status;
    int32_t m_Sub_member_count;
    bool m_Sub_member_countIsSet;
utility::string_t m_Template;
    bool m_TemplateIsSet;
utility::string_t m_Unique_name;
    };

}
}
}
}

#endif /* GroupResource_H_ */
