/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * ParameterResource.h
 *
 * 
 */

#ifndef ParameterResource_H_
#define ParameterResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Object.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ParameterResource
    : public ModelBase
{
public:
    ParameterResource();
    virtual ~ParameterResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ParameterResource members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOf() const;
    bool ofIsSet() const;
    void unsetOf();
    void setOf(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();
    void setType(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Object> getValue() const;
    bool valueIsSet() const;
    void unsetValue();
    void setValue(std::shared_ptr<Object> value);

protected:
    utility::string_t m_Of;
    bool m_OfIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
    std::shared_ptr<Object> m_Value;
    bool m_ValueIsSet;
};

}
}
}
}

#endif /* ParameterResource_H_ */
