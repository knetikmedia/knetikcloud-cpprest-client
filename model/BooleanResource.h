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
 * BooleanResource.h
 *
 * 
 */

#ifndef BooleanResource_H_
#define BooleanResource_H_


#include "ModelBase.h"


namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  BooleanResource
    : public ModelBase
{
public:
    BooleanResource();
    virtual ~BooleanResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BooleanResource members

    /// <summary>
    /// 
    /// </summary>
    bool getValue() const;
    bool valueIsSet() const;
    void unsetValue();
    void setValue(bool value);

protected:
    bool m_Value;
    bool m_ValueIsSet;
};

}
}
}
}

#endif /* BooleanResource_H_ */
