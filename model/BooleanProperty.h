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
 * BooleanProperty.h
 *
 * 
 */

#ifndef BooleanProperty_H_
#define BooleanProperty_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Property.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  BooleanProperty
    : public ModelBase
{
public:
    BooleanProperty();
    virtual ~BooleanProperty();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BooleanProperty members

    /// <summary>
    /// The type of the property. Used for polymorphic type recognition and thus must match an expected type with additional properties.
    /// </summary>
    utility::string_t getType() const;
    void setType(utility::string_t value);
        /// <summary>
    /// The value
    /// </summary>
    bool getValue() const;
    void setValue(bool value);
    bool valueIsSet() const;
    void unsetValue();

protected:
    utility::string_t m_Type;
    bool m_Value;
    bool m_ValueIsSet;
};

}
}
}
}

#endif /* BooleanProperty_H_ */
