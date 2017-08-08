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
 * ArticleResource.h
 *
 * 
 */

#ifndef ArticleResource_H_
#define ArticleResource_H_


#include "ModelBase.h"

#include "NestedCategory.h"
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
class  ArticleResource
    : public ModelBase
{
public:
    ArticleResource();
    virtual ~ArticleResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ArticleResource members

    /// <summary>
    /// Whether the article is active
    /// </summary>
    bool getActive() const;
        void setActive(bool value);
    /// <summary>
    /// A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
    /// </summary>
    std::map<utility::string_t, std::shared_ptr<Property>>& getAdditionalProperties();
    bool additionalPropertiesIsSet() const;
    void unsetAdditional_properties();
    void setAdditionalProperties(std::map<utility::string_t, std::shared_ptr<Property>> value);
    /// <summary>
    /// The body of the article
    /// </summary>
    utility::string_t getBody() const;
        void setBody(utility::string_t value);
    /// <summary>
    /// The category for the article
    /// </summary>
    std::shared_ptr<NestedCategory> getCategory() const;
        void setCategory(std::shared_ptr<NestedCategory> value);
    /// <summary>
    /// The date/time this resource was created in seconds since unix epoch
    /// </summary>
    int64_t getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetCreated_date();
    void setCreatedDate(int64_t value);
    /// <summary>
    /// The id of the article
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(utility::string_t value);
    /// <summary>
    /// The tags for the article
    /// </summary>
    std::vector<utility::string_t>& getTags();
    bool tagsIsSet() const;
    void unsetTags();
    void setTags(std::vector<utility::string_t> value);
    /// <summary>
    /// An article template this article is validated against (private). May be null and no validation of additional_properties will be done
    /// </summary>
    utility::string_t getTemplate() const;
    bool templateIsSet() const;
    void unsetTemplate();
    void setTemplate(utility::string_t value);
    /// <summary>
    /// The title of the article
    /// </summary>
    utility::string_t getTitle() const;
        void setTitle(utility::string_t value);
    /// <summary>
    /// The date/time this resource was last updated in seconds since unix epoch
    /// </summary>
    int64_t getUpdatedDate() const;
    bool updatedDateIsSet() const;
    void unsetUpdated_date();
    void setUpdatedDate(int64_t value);

protected:
    bool m_Active;
        std::map<utility::string_t, std::shared_ptr<Property>> m_Additional_properties;
    bool m_Additional_propertiesIsSet;
    utility::string_t m_Body;
        std::shared_ptr<NestedCategory> m_Category;
        int64_t m_Created_date;
    bool m_Created_dateIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    std::vector<utility::string_t> m_Tags;
    bool m_TagsIsSet;
    utility::string_t m_Template;
    bool m_TemplateIsSet;
    utility::string_t m_Title;
        int64_t m_Updated_date;
    bool m_Updated_dateIsSet;
};

}
}
}
}

#endif /* ArticleResource_H_ */
