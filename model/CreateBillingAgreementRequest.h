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
 * CreateBillingAgreementRequest.h
 *
 * 
 */

#ifndef CreateBillingAgreementRequest_H_
#define CreateBillingAgreementRequest_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  CreateBillingAgreementRequest
    : public ModelBase
{
public:
    CreateBillingAgreementRequest();
    virtual ~CreateBillingAgreementRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreateBillingAgreementRequest members

    /// <summary>
    /// The endpoint URL to which PayPal should forward the user if they cancel (do not accept) the agreement
    /// </summary>
    utility::string_t getCancelUrl() const;
        void setCancelUrl(utility::string_t value);
    /// <summary>
    /// The endpoint URL to which PayPal should forward the user after they accept the agreement. This endpoint will receive information needed for the next step
    /// </summary>
    utility::string_t getReturnUrl() const;
        void setReturnUrl(utility::string_t value);
    /// <summary>
    /// The ID of the user. Defaults to the logged in user
    /// </summary>
    int32_t getUserId() const;
    bool userIdIsSet() const;
    void unsetUser_id();
    void setUserId(int32_t value);

protected:
    utility::string_t m_Cancel_url;
        utility::string_t m_Return_url;
        int32_t m_User_id;
    bool m_User_idIsSet;
};

}
}
}
}

#endif /* CreateBillingAgreementRequest_H_ */
