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
 * PayBySavedMethodRequest.h
 *
 * 
 */

#ifndef PayBySavedMethodRequest_H_
#define PayBySavedMethodRequest_H_


#include "ModelBase.h"


namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  PayBySavedMethodRequest
    : public ModelBase
{
public:
    PayBySavedMethodRequest();
    virtual ~PayBySavedMethodRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PayBySavedMethodRequest members

    /// <summary>
    /// The id of the payment method to use. Must belong to the caller, be public or have PAYMENTS_ADMIN permission
    /// </summary>
    int32_t getPaymentMethod() const;
        void setPaymentMethod(int32_t value);

protected:
    int32_t m_Payment_method;
    };

}
}
}
}

#endif /* PayBySavedMethodRequest_H_ */
