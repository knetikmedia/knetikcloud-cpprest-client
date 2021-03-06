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
 * PropertyFieldListResource.h
 *
 * 
 */

#ifndef PropertyFieldListResource_H_
#define PropertyFieldListResource_H_


#include "ModelBase.h"

#include "PropertyFieldResource.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  PropertyFieldListResource
    : public ModelBase
{
public:
    PropertyFieldListResource();
    virtual ~PropertyFieldListResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PropertyFieldListResource members

    /// <summary>
    /// A list of fields for the property definition.
    /// </summary>
    std::vector<std::shared_ptr<PropertyFieldResource>>& getPropertyDefinitionFields();
    bool propertyDefinitionFieldsIsSet() const;
    void unsetProperty_definition_fields();
    void setPropertyDefinitionFields(std::vector<std::shared_ptr<PropertyFieldResource>> value);
    /// <summary>
    /// A list of fields for the property.
    /// </summary>
    std::vector<std::shared_ptr<PropertyFieldResource>>& getPropertyFields();
    bool propertyFieldsIsSet() const;
    void unsetProperty_fields();
    void setPropertyFields(std::vector<std::shared_ptr<PropertyFieldResource>> value);
    /// <summary>
    /// The type for the property this describes.
    /// </summary>
    utility::string_t getPropertyType() const;
    bool propertyTypeIsSet() const;
    void unsetProperty_type();
    void setPropertyType(utility::string_t value);

protected:
    std::vector<std::shared_ptr<PropertyFieldResource>> m_Property_definition_fields;
    bool m_Property_definition_fieldsIsSet;
    std::vector<std::shared_ptr<PropertyFieldResource>> m_Property_fields;
    bool m_Property_fieldsIsSet;
    utility::string_t m_Property_type;
    bool m_Property_typeIsSet;
};

}
}
}
}

#endif /* PropertyFieldListResource_H_ */
