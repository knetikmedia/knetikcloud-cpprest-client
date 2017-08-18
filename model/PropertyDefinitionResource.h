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
 * PropertyDefinitionResource.h
 *
 * 
 */

#ifndef PropertyDefinitionResource_H_
#define PropertyDefinitionResource_H_


#include "ModelBase.h"

#include "PropertyFieldListResource.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  PropertyDefinitionResource
    : public ModelBase
{
public:
    PropertyDefinitionResource();
    virtual ~PropertyDefinitionResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PropertyDefinitionResource members

    /// <summary>
    /// A list of the fields on both the property definition and property of this type
    /// </summary>
    std::shared_ptr<PropertyFieldListResource> getFieldList() const;
    bool fieldListIsSet() const;
    void unsetField_list();
    void setFieldList(std::shared_ptr<PropertyFieldListResource> value);
    /// <summary>
    /// The name of the property
    /// </summary>
    utility::string_t getName() const;
        void setName(utility::string_t value);
    /// <summary>
    /// Whether the property is required
    /// </summary>
    bool getRequired() const;
        void setRequired(bool value);
    /// <summary>
    /// The type of the property. Used for polymorphic type recognition and thus must match an expected type with additional properties.
    /// </summary>
    utility::string_t getType() const;
        void setType(utility::string_t value);

protected:
    std::shared_ptr<PropertyFieldListResource> m_Field_list;
    bool m_Field_listIsSet;
    utility::string_t m_Name;
        bool m_Required;
        utility::string_t m_Type;
    };

}
}
}
}

#endif /* PropertyDefinitionResource_H_ */