package mk.ukim.finki.wp.lab;

import mk.ukim.finki.wp.lab.web.BookListServlet;
import mk.ukim.finki.wp.lab.web.BookReservationServlet;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.boot.web.servlet.ServletComponentScan;
import org.springframework.boot.web.servlet.ServletRegistrationBean;
import org.springframework.context.annotation.Bean;

@SpringBootApplication
@ServletComponentScan
public class LabApplication {

    public static void main(String[] args) {
        SpringApplication.run(LabApplication.class, args);
    }
    @Bean
    public ServletRegistrationBean<BookListServlet> bookListServletServletRegistration(BookListServlet servlet) {
        return new ServletRegistrationBean<>(servlet, "/");
    }
    @Bean
    public ServletRegistrationBean<BookReservationServlet> bookReservationServletServletRegistration(BookReservationServlet servlet) {
        return new ServletRegistrationBean<>(servlet, "/bookReservation");

    }
}
