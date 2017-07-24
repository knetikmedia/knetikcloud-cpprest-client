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
 * RevenueReportResource.h
 *
 * 
 */

#ifndef RevenueReportResource_H_
#define RevenueReportResource_H_


#include "ModelBase.h"


namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  RevenueReportResource
    : public ModelBase
{
public:
    RevenueReportResource();
    virtual ~RevenueReportResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// RevenueReportResource members

    /// <summary>
    /// 
    /// </summary>
    int64_t getCustomerCount() const;
    bool customerCountIsSet() const;
    void unsetCustomer_count();
    void setCustomerCount(int64_t value);
    /// <summary>
    /// 
    /// </summary>
    int64_t getSaleCount() const;
    bool saleCountIsSet() const;
    void unsetSale_count();
    void setSaleCount(int64_t value);
    /// <summary>
    /// 
    /// </summary>
    double getSalesAverage() const;
    bool salesAverageIsSet() const;
    void unsetSales_average();
    void setSalesAverage(double value);
    /// <summary>
    /// 
    /// </summary>
    double getSalesTotal() const;
    bool salesTotalIsSet() const;
    void unsetSales_total();
    void setSalesTotal(double value);

protected:
    int64_t m_Customer_count;
    bool m_Customer_countIsSet;
    int64_t m_Sale_count;
    bool m_Sale_countIsSet;
    double m_Sales_average;
    bool m_Sales_averageIsSet;
    double m_Sales_total;
    bool m_Sales_totalIsSet;
};

}
}
}
}

#endif /* RevenueReportResource_H_ */
