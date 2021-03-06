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
 * CategoryResource.h
 *
 * 
 */

#ifndef CategoryResource_H_
#define CategoryResource_H_


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
class  CategoryResource
    : public ModelBase
{
public:
    CategoryResource();
    virtual ~CategoryResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CategoryResource members

    /// <summary>
    /// Whether the category is currently active. If not, it and its questions will be filtered out.
    /// </summary>
    bool getActive() const;
    bool activeIsSet() const;
    void unsetActive();
    void setActive(bool value);
    /// <summary>
    /// A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
    /// </summary>
    std::map<utility::string_t, std::shared_ptr<Property>>& getAdditionalProperties();
    bool additionalPropertiesIsSet() const;
    void unsetAdditional_properties();
    void setAdditionalProperties(std::map<utility::string_t, std::shared_ptr<Property>> value);
    /// <summary>
    /// The unique ID for this category
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(utility::string_t value);
    /// <summary>
    /// The name of this category. Cannot be blank
    /// </summary>
    utility::string_t getName() const;
        void setName(utility::string_t value);
    /// <summary>
    /// A category template this category is validated against (private). May be null and no validation of additional_properties will be done
    /// </summary>
    utility::string_t getTemplate() const;
    bool templateIsSet() const;
    void unsetTemplate();
    void setTemplate(utility::string_t value);

protected:
    bool m_Active;
    bool m_ActiveIsSet;
    std::map<utility::string_t, std::shared_ptr<Property>> m_Additional_properties;
    bool m_Additional_propertiesIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Name;
        utility::string_t m_Template;
    bool m_TemplateIsSet;
};

}
}
}
}

#endif /* CategoryResource_H_ */
